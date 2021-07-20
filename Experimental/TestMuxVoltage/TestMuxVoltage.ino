int select_line_pins[4] = {25, 26, 27, 28};
const int volt_function_output = A0;
float voltage[9] = {0.00,0.00,0.00,0.00,0.00,0.00,0.00,0.00,0.00};
void select_Multiplexer_Pin(byte pin)
{
  if (pin > 8) 
    return; // Exit the function if it is out of bound
  for (int i = 0; i < 4; i++)
  {
    if (pin &(1 << i))   //shifting the bits to activate the specific select lines
      digitalWrite(select_line_pins[i], HIGH);
    else
      digitalWrite(select_line_pins[i], LOW);
  }

}


void Voltage_sense()
{
  int volt = 0;
  //int comm_code = 5;
  //int incoming_data = 0;
  //Serial.println(comm_code); 
  for (int voltPin = 0; voltPin < 9; voltPin++)
  {
    select_Multiplexer_Pin(voltPin);
    //delay(5);
    volt = analogRead(volt_function_output);
    
    voltage[voltPin] = volt *100 *(4.73 / 1023.00);
    Serial.print("PIN ");
    Serial.print(voltPin);
    Serial.print(": ");
    Serial.println(voltage[voltPin]);
    delay(1000);
    //temp = 0.0; 
    //average = average + temp_sense[tempPin]; 
  }
   //average = average/9.00; 
    //while (!Serial.available()){
      //do nothing
    //}
    //incoming_data = Serial.read();   
    //if(incoming_data == comm_code){
}

void setup() {
  Serial.begin(9600);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  digitalWrite(25, LOW);
  digitalWrite(26, LOW);
  digitalWrite(27, LOW);
  digitalWrite(28, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  Voltage_sense();
}
