#include <Vector.h>
#include <Pair.h>
#include <Arduino.h>
#include <math.h>

int pin = A0;
int voltage = 0;
int comm_code = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A0, INPUT);
  while (!Serial.available()){
      //do nothing
  }
  int begin_program = Serial.read();
}

void loop() {
  // put your main code here, to run repeatedly:
  int incoming_data = 0;
  Serial.print(comm_code);                             
  for (int i = 0; i<3; i++)//(int pin = 97; pin > 97 - series_cells; pin--)
  {
    voltage = analogRead(pin) * (5.0 / 1024.0);
    while (!Serial.available()){
      //do nothing
    }
    incoming_data = Serial.read();   
    if(incoming_data == comm_code){
      Serial.print(voltage);          
    }
   } 
}
