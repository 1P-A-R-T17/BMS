# -*- coding: utf-8 -*-
"""
Created on Fri Jul  2 19:52:38 2021

@author: rachi
"""
from datetime import datetime
import random

from influxdb_client import InfluxDBClient, Point, WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

# You can generate a Token from the "Tokens Tab" in the UI
token = "teXoimWzBPEly43ay2Gp8F3NosQjw6QZPrd_NF-e8Kl5GaeGd_QwerxsuGoDSO5hCeJZtEFystHJCW2t8Qt1Xg=="
org = "1-PART-17"
bucket = "Battery Management"

client = InfluxDBClient(url="https://eu-central-1-1.aws.cloud2.influxdata.com", token=token)

parallel_v = [0.0, 0.0, 0.0,]

write_api = client.write_api(write_options=SYNCHRONOUS)

#value = 10.01

#point = Point("mem") \
 # .tag("host", "host1") \
  #.field("used_percent", value) \
  #.time(datetime.utcnow(), WritePrecision.NS)

#write_api.write(bucket, org, point)

#influx delete \
 # --bucket Battery Management \
  #--start 1970-01-01T00:00:00Z \
  #--stop $(date +"%Y-%m-%dT%H:%M:%SZ") \
  #--predicate '_measurement="mem"'
loop = 10000
cells = 3
for j in range(loop):
    for i in range(cells):
            #ser.write(return_code)
            parallel_v[i] = random.random()
            string = 'voltage' + str(i)
            point = Point("Battery") \
                .tag("Type", "Voltage") \
                .field(string, parallel_v[i]) \
                    #.time(datetime.utcnow(), WritePrecision.NS)

            write_api.write(bucket, org, point)