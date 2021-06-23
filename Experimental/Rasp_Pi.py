import serial
import time

ser=serial.Serial("/dev/ttyACM1",19200)
beginProgram = 1
toArduino = 1

time.sleep(1)
ser.write(beginProgram)
print(beginProgram)
while ser.in_waiting<=0:
    #print('x')
    pass

comm_code = ser.read()
print(comm_code)

for x in range(3):
    #time.sleep(.05)
    ser.write(toArduino)
    while ser.in_waiting<=0:
        pass
    #time.sleep(.05)
    voltage = ser.readline()
    print(voltage)
    
