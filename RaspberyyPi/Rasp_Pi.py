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

time.sleep(1)

ser.write(beginProgram)

def read_cellvolts():
    for i in series_cell:
        comm_code = 1
        ser.write(comm_code)
        parallel_v[i] = ser.readline()

def read_totalvolts():
    ser.write('2')
    totv = ser.readline()
    
def read_cellamps():
    for i in totalcell:
        ser.write('3')
        cur_cell[i] = ser.readline()
        
def read_totalamps():
    ser.write('4')
    totamp = ser.readline()
    
def read_temperature():
    for i in totalcell:
        ser.write('5')
        temp_cell[i] = ser.readline()

def send_outputsArduino():
	#Write code here
    pass 

while True:
    while ser.in_waiting<=0:
        pass
    
    comm_code = ser.read()
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
        pass
    elif comm_code == 7:
        #inform influxdb of undervoltage
        pass
    elif comm_code == 8:
        #inform influxdb of thermal error
        pass
    elif comm_code == 9:
        #inform influxdb of overCurrent
        pass
    elif comm_code == 10:
        #inform influxdb of charging
        pass
    elif comm_code == 11:
        #inform influxdb of discharging
        pass
    elif comm_code == 12:
        #inform cell balance on
        pass
    elif comm_code == 13:
        #inform cell balance off
        pass
        