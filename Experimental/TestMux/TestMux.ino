int select_line_pins[4] = {25, 26, 27, 28};
const int temp_function_output = A13;
float temp_sense[9] = {0.00,0.00,0.00,0.00,0.00,0.00,0.00,0.00,0.00};
void select_Multiplexer_Pin(byte pin)
{
  if (pin > 8) 
    return; // Exit the function if it is out of bound
  for (auto i = 0; i < 4; i++)
  {
    if (pin &(1 << i))   //shifting the bits to activate the specific select lines
      digitalWrite(select_line_pins[i], HIGH);
    else
      digitalWrite(select_line_pins[i], LOW);
  }
}

void Temperature_sense()
{
  int temp = 0;
  //int comm_code = 5;
  //int incoming_data = 0;
  //Serial.println(comm_code); 
  for (int tempPin = 0; tempPin < 9; tempPin++)
  {
    select_Multiplexer_Pin(tempPin);
    //delay(5);
    temp = analogRead(temp_function_output);
    
    temp_sense[tempPin] = (temp*473.0/10.0)/1023.0;
    Serial.print("PIN ");
    Serial.print(tempPin);
    Serial.print(": ");
    Serial.println(temp_sense[tempPin]);
    delay(2000);
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
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Temperature_sense();
}
