#  * - means doubt regarding it. Might work, might not. Need practical testing

import serial
import RPi.GPIO as GPIO
import time

ser=serial.Serial("/dev/ttyACM0",9600)
ser.baudrate=9600
#defining all the input varaiables
ah = 7.5
batcapideal = 94.5
series_cell = 3
parallel_cell = 3
totalcell = series_cell * parallel_cell

def read_Arduinoinputs():
	#Write code here
    if (ser.in_waiting > 0):
        comm_code = ser.readline()
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

def read_cellvolts():
    for i in series_cell:
        ser.write('1')
        par_v[i+1] = ser.readline()

def read_totalvolts():
    ser.write('2')
    totv = ser.readline()
    
def read_cellamps():
    for i in totalcell:
        ser.write('3')
        cur_cell[i+1] = ser.readline()
        
def read_totalamps():
    ser.write('4')
    totamp = ser.readline()
    
def read_temperature():
    for i in totalcell:
        ser.write('5')
        temp_cell[i+1] = ser.readline()

def send_outputsArduino():
	#Write code here

while True:
        #Get inputs from Arduino
	read_Arduinoinputs()
	
	#Battery capacity calculation
	if totv == 12.6:
		time.sleep(60)
		read_Arduinoinputs()
		batcappract = ah * totv
		soh = batcappract / 94.5  #to get proper decimal output for SoH, we use the denominator a floating point instead of var
		send_outputsArduino()
	
	#Send values to Arduino
	send_outputsArduino()


