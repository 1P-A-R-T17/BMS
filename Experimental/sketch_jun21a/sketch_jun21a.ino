#include <Vector.h>
#include <Pair.h>
#include <Arduino.h>
#include <math.h>

int pin = A0;
float voltage = 0;
int comm_code = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  pinMode(A0, INPUT);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  while (!Serial.available()){
      //do nothing
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(LED_BUILTIN, LOW);
  }
  int begin_program = Serial.read();
  digitalWrite(LED_BUILTIN, LOW);

  int incoming_data = 0;
  Serial.print(comm_code);                             
  for (int i = 0; i<3; i++)//(int pin = 97; pin > 97 - series_cells; pin--)
  {
    voltage = analogRead(pin) * (5.0 / 1024.0);
    while (!Serial.available()){
      //do nothing
      digitalWrite(LED_BUILTIN, HIGH);
    }
    incoming_data = Serial.read();   
    //if(incoming_data == comm_code){
    Serial.println(voltage); 
    digitalWrite(LED_BUILTIN, LOW);         
    //}
   }
}

void loop() {
  // put your main code here, to run repeatedly:
   
}
