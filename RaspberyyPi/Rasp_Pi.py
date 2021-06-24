import serial
import time
import numpy as np
import pandas as pd

ser=serial.Serial("/dev/ttyACM0",19200)
ah = 7.5
batcapideal = 94.5
series_cell = 3
parallel_cell = 3
totalcell = series_cell * parallel_cell
beginProgram = 1
parallel_v = []
cur_cell = []
temp_cell = []
return_code = 1

time.sleep(1)

ser.write(beginProgram)

def read_cellvolts():
    for i in series_cell:
        ser.write(return_code)
        parallel_v[i] = float(ser.readline())

def read_totalvolts():
    ser.write(return_code)
    totv = float(ser.readline())
    
def read_cellamps():
    for i in totalcell:
        ser.write(return_code)
        cur_cell[i] = float(ser.readline())
        
def read_totalamps():
    ser.write(return_code)
    totamp =float(ser.readline())
    
def read_temperature():
    for i in totalcell:
        ser.write(return_code)
        temp_cell[i] = float(ser.readline())

def send_outputsArduino():
	#Write code here
    pass 
"""
def soh_calculation(totv):
    #Battery capacity calculation
	time.sleep(60)
	read_totalvolts()
	batcappract = ah * totv
	soh = batcappract / 94.5
"""
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
    elif comm_code == 6:
        #inform influxdb of overvoltage
        ser.write(return_code) #write at end of block
    elif comm_code == 7:
        #inform influxdb of undervoltage
        ser.write(return_code)
    elif comm_code == 8:
        #inform influxdb of thermal error
        ser.write(return_code)
    elif comm_code == 9:
        #inform influxdb of overCurrent
        ser.write(return_code)
    elif comm_code == 10:
        #inform influxdb of charging
        ser.write(return_code)
    elif comm_code == 11:
        #inform influxdb of discharging
        ser.write(return_code)
    elif comm_code == 12:
        #inform cell balance on
        ser.write(return_code)
    elif comm_code == 13:
        #inform cell balance off
        ser.write(return_code)
"""    
    if totv == 12.6:
        #Battery SoH calculation
        soh_calculation()
"""      