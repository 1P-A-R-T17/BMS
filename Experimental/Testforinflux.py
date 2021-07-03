import time
import random
import numpy as np
import pandas as pd
import tensorflow as tf
from tensorflow import keras

from datetime import datetime

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

pd.read_csv('C:\\Users\\Abhishek\\OneDrive\\Desktop\\BMS_NN_dataset')
df.loc[:, 'Temperature'] = 25
CSV_COLUMN_NAMES = ['Current', 'Temperature', 'Voltage', 'SoC']
current = df.pop('Current')
temperature = df.pop('Temperature')
voltage = df.pop('Voltage')
soc = df.pop('SoC')

model = keras.models.load_model('D:\\Battery Management System\\Code\\BMS\\NeuralNetwok\\soc_predictor.h5')

def predict_soc():
    for j in totalcell:
        if j<=2:
            x=0
        elif j>2 and j<=5:
            x=1
        else:
            x=2
        
        soc[j] = model.predict([[cur_cell[j], temp_cell[j], parallel_v[x]]])
        string = 'state of charge ' + str(j)
        point  = Point("Battery") \
            .tag("Type", "State of charge") \
            .field(string, soc[j]) \
    
        write_api.write(bucket, org, point)

for i in range(1000):
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
    
    temp = temperature[i]
    for j in range(9):
        temp_cell[j] = temperature[i]
        string = 'temperature' + str(i)
        point = Point("Battery") \
            .tag("Type","temperature") \
            .field(string, temp_cell[i]) \
                
        write_api.write(bucket, org, point)
        predict_soc()
        
    def soh_calculation(totv):
    #Battery capacity calculation
        batcappract= ah * totv
        soh = batcappract /94.5
        point = Point("Battery") \
            .tag("Type", "State of Health") \
            .field("SoH", soh)
        
        write_api.write(bucket, org, point)
    
    charge = random.randint(0, 1)
    if charge == 1:
        Error_code = Point("Battery_error") \
            .field("charging", 1)\
        
        write_api.write(bucket, org, Error_code)
    else:
        Error_code = Point("Battery_error") \
            .field("discharging", 1)\
        
        write_api.write(bucket, org, Error_code)
        
        
        
        
        
        