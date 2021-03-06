import numpy as np
import pandas as pd
import tensorflow as tf
from tensorflow import keras
import time

from influxdb_client import InfluxDBClient, Point, WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

token = "teXoimWzBPEly43ay2Gp8F3NosQjw6QZPrd_NF-e8Kl5GaeGd_QwerxsuGoDSO5hCeJZtEFystHJCW2t8Qt1Xg=="
org = "1-PART-17"
bucket = "Battery Management"

client = InfluxDBClient(url="https://eu-central-1-1.aws.cloud2.influxdata.com", token=token)

write_api = client.write_api(write_options=SYNCHRONOUS)

ah = 7.5
batcapideal = 94.5
flag=0

parallel_v = [0.0, 0.0, 0.0]
cur_cell = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
temp_cell = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
totv = 0
totamp = 0
soc = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

CSV_COLUMN_NAMES = ['Current', 'Temperature', 'Voltage', 'SoC']
df = pd.read_csv('C:\\Users\\rachi\\Desktop\\BMS_Training.csv', names = CSV_COLUMN_NAMES, header = 0)
#df.loc[:, 'Temperature'] = 25
current = df.pop('Current')
temperature = df.pop('Temperature')
voltage = df.pop('Voltage')
soc = df.pop('SoC')

model = keras.models.load_model('C:\\Users\\rachi\\Desktop\\soc_predictor_new.h5')

def predict_soc():
    for j in range(9):
        if j<=2:
            x=0
        elif j>2 and j<=5:
            x=1
        else:
            x=2
        
        soc[j] = model.predict([[cur_cell[j], temp, parallel_v[x]]])
        string = 'state of charge ' + str(j)
        state_soc = float(soc[j])
        #print(soc[j])
        point  = Point("Battery") \
            .tag("Type", "State of charge") \
            .field(string, state_soc) \
    
        write_api.write(bucket, org, point)
    
    print("Sent SOC")

for i in range(1000):
    toc = time.perf_counter()
    vol = voltage[i]
    for j in range(3):
        parallel_v[j] = voltage[i]
        string = 'voltage' + str(j)
        point = Point("Battery") \
            .tag("Type", "Voltage") \
            .field(string, parallel_v[j]) \

        write_api.write(bucket, org, point)
        
    totv = 3 * vol
    point = Point("Battery") \
        .tag("Type", "Voltage") \
        .field("Total Voltage", totv) \
        #.time(datetime.utcnow(), WritePrecision.NS)

    write_api.write(bucket, org, point)
    
    cur = current[i]
    for j in range(9):
        cur_cell[j] = cur
        string = 'current' + str(j)
        point = Point("Battery") \
            .tag("Type","current") \
            .field(string, cur_cell[j]) \
                
        write_api.write(bucket, org, point)
        
    totamp = 3 * cur
    point = Point("Battery") \
        .tag("Type","current") \
        .field("Total Current", totamp) \
                
    write_api.write(bucket, org, point)
    
    temp = float(temperature[i])
    point = Point("Battery") \
        .tag("Type","temperature") \
        .field("average_temperature", temp) \
                
    write_api.write(bucket, org, point)
    predict_soc()

    soh = 0.99
    point = Point("Battery") \
        .tag("Type", "State of Health") \
        .field("SoH", soh)
        
    write_api.write(bucket, org, point)
    
    
    
    Error_code = Point("Battery_error") \
        .field("over_voltage", 0)\
    
    write_api.write(bucket, org, Error_code)
    tic = time.perf_counter()
    flag=1
    
    
    Error_code = Point("Battery_error")\
        .field("under_voltage", 0) \
        
    write_api.write(bucket, org, Error_code)
    
    
    Error_code = Point("Battery_error")\
        .field("Temperature_error", 0) \
                 
    write_api.write(bucket, org, Error_code)


    Error_code = Point("Battery_error") \
        .field("over_current", 0)\
        
    write_api.write(bucket, org, Error_code)
        
    
    Error_code = Point("Battery_error") \
        .field("charging", 0)\
        
    write_api.write(bucket, org, Error_code)


    Error_code = Point("Battery_error") \
        .field("discharging", 1)\
        
    write_api.write(bucket, org, Error_code)
    
    
    Error_code = Point("Battery_error") \
        .field("Cell Balance ON", 0)\
        
    write_api.write(bucket, org, Error_code)


    Error_code = Point("Battery_error") \
        .field("Cell Balance OFF", 1)\
        
    write_api.write(bucket, org, Error_code)
    
    tic = time.perf_counter()
    print(tic-toc)
        
        
        
        
        