#  * - means doubt regarding it. Might work, might not. Need practical testing

import serial
import RPi.GPIO as GPIO
import time

ser=serial.Serial("/dev/ttyACM0",9600)
ser.baudrate=9600
#defining all the input varaiables
ah = 7.5
batcapideal = 94.5

def read_Arduinoinputs():
	#Write code here

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


