import serial
import time
from tensorflow import keras

from datetime import datetime

from influxdb_client import InfluxDBClient, Point, WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

token = "teXoimWzBPEly43ay2Gp8F3NosQjw6QZPrd_NF-e8Kl5GaeGd_QwerxsuGoDSO5hCeJZtEFystHJCW2t8Qt1Xg=="
org = "1-PART-17"
bucket = "Battery Management"

client = InfluxDBClient(url="https://eu-central-1-1.aws.cloud2.influxdata.com", token=token)

write_api = client.write_api(write_options=SYNCHRONOUS)

ser=serial.Serial("/dev/ttyACM0",19200)

ah = 7.5
batcapideal = 94.5

series_cell = 3
parallel_cell = 3
totalcell = series_cell * parallel_cell

beginProgram = 1

flag=0

parallel_v = [0.0, 0.0, 0.0]
cur_cell = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
temp_cell = 0.00
totv = 0
totamp = 0
soc = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

model = keras.models.load_model('C:\\Users\\rachi\\Desktop\\soc_predictor.h5')

return_code = 1

time.sleep(1)

ser.write(beginProgram)

def predict_soc():
    for i in totalcell:
        if i<=2:
            x=0
        elif i>2 and i<=5:
            x=1
        else:
            x=2
        
        soc[i] = model.predict([[cur_cell[i], temp_cell, parallel_v[x]]])
        string = 'state of charge ' + str(i)
        point  = Point("Battery") \
            .tag("Type", "State of charge") \
            .field(string, soc[i]) \
    
        write_api.write(bucket, org, point)
    

def read_cellvolts():
    for i in range(series_cell):
        ser.write(return_code)
        parallel_v[i] = float(ser.readline())
        string = 'voltage' + str(i)
        point = Point("Battery") \
            .tag("Type", "Voltage") \
            .field(string, parallel_v[i]) \
            #.time(datetime.utcnow(), WritePrecision.NS)

        write_api.write(bucket, org, point)

def read_totalvolts():
    ser.write(return_code)
    totv = float(ser.readline())
    point = Point("Battery") \
        .tag("Type", "Voltage") \
        .field("Total Voltage", totv) \
        #.time(datetime.utcnow(), WritePrecision.NS)

    write_api.write(bucket, org, point)
    
def read_cellamps():
    for i in range(totalcell):
        ser.write(return_code)
        cur_cell[i] = float(ser.readline())
        string = 'current' + str(i)
        point = Point("Battery") \
            .tag("Type","current") \
            .field(string, cur_cell[i]) \
                
        write_api.write(bucket, org, point)        
        
def read_totalamps():
    ser.write(return_code)
    totamp =float(ser.readline())
    point = Point("Battery") \
        .tag("Type","current") \
        .field("Total Current", totamp) \
                
    write_api.write(bucket, org, point)
    
def read_temperature():
    ser.write(return_code)
    temp_cell = float(ser.readline())
    point = Point("Battery") \
        .tag("Type","temperature") \
        .field("average_temperature", temp_cell) \
                
    write_api.write(bucket, org, point)
    predict_soc()

def soh_calculation(totv):
    #Battery capacity calculation
    batcappract = ah * totv
    soh = batcappract /94.5
    point = Point("Battery") \
        .tag("Type", "State of Health") \
        .field("SoH", soh)
        
    write_api.write(bucket, org, point)
    
while True:
    while ser.in_waiting<=0:
        pass
    
    comm_code = int(ser.readline())
    if comm_code == 1:
        read_cellvolts()
    elif comm_code == 2:
        read_totalvolts()
    elif comm_code == 3:
        read_cellamps()
    elif comm_code == 4:
        read_totalamps()
    elif comm_code == 5:
        read_temperature()
        predict_soc()
    elif comm_code == 6:
        #inform influxdb of overvoltage
        Error_code = Point("Battery_error") \
            .field("over_voltage", 1)\
        
        write_api.write(bucket, org, Error_code)
        tic = time.perf_counter()
        flag=1
        ser.write(return_code) #write at end of block
    elif comm_code == 7:
         #inform influxdb of undervoltage
         Error_code = Point("Battery_error")\
             .field("under_voltage", 1) \
        
         write_api.write(bucket, org, Error_code)
         ser.write(return_code)
    elif comm_code == 8:
        #inform influxdb of thermal error
         Error_code = Point("Battery_error")\
             .field("Temperature_error", 1) \
                 
         write_api.write(bucket, org, Error_code)
         ser.write(return_code)
    elif comm_code == 9:
        #inform influxdb of overCurrent
        Error_code = Point("Battery_error") \
            .field("over_current", 1)\
        
        write_api.write(bucket, org, Error_code)
        ser.write(return_code) #write at end of block
    elif comm_code == 10:
        #inform influxdb of charging
        Error_code = Point("Battery_error") \
            .field("charging", 1)\
        
        write_api.write(bucket, org, Error_code)
        ser.write(return_code)
    elif comm_code == 11:
        #inform influxdb of discharging
        Error_code = Point("Battery_error") \
            .field("discharging", 1)\
        
        write_api.write(bucket, org, Error_code)
        ser.write(return_code)
    elif comm_code == 12:
        #inform cell balance on
        Error_code = Point("Battery_error") \
            .field("Cell Balance ON", 1)\
        
        write_api.write(bucket, org, Error_code)
        ser.write(return_code)
    elif comm_code == 13:
        #inform cell balance off
        Error_code = Point("Battery_error") \
            .field("Cell Balance OFF", 1)\
        
        write_api.write(bucket, org, Error_code)
        ser.write(return_code)
        

    if flag==1:
        toc = time.perf_counter()
        count = toc - tic
        if count>=70:
            soh_calculation(totv)
            flag=0