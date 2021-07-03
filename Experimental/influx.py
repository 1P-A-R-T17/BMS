# -*- coding: utf-8 -*-
"""
Created on Fri Jul  2 19:52:38 2021

@author: rachi
"""
from datetime import datetime

from influxdb_client import InfluxDBClient, Point, WritePrecision
from influxdb_client.client.write_api import SYNCHRONOUS

# You can generate a Token from the "Tokens Tab" in the UI
token = "teXoimWzBPEly43ay2Gp8F3NosQjw6QZPrd_NF-e8Kl5GaeGd_QwerxsuGoDSO5hCeJZtEFystHJCW2t8Qt1Xg=="
org = "1-PART-17"
bucket = "rachiraj's Bucket"

client = InfluxDBClient(url="https://eu-central-1-1.aws.cloud2.influxdata.com", token=token)

write_api = client.write_api(write_options=SYNCHRONOUS)

data = "mem,host=host1 used_percent=23.43234543"
write_api.write(bucket, org, data)

