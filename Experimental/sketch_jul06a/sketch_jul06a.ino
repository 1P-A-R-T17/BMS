#include <Vector.h>
#include <Pair.h>
#include <Arduino.h>
#include <math.h>
//#include <ArduinoSTL.h>

//relayPin declaration
const int relayPin=22;

//select line multiplexer variables
Vector<int> select_line_pins; //{25, 26, 27, 28};       //{ 75, 74, 73, 72 }

const int current_function_output = A8;  //Pin number(89) for current sensing
const int temp_function_output = A13; //Pin number(84) for temperature sensing

//voltage sensing variable
Vector<Pair<float, int>> voltages;
typedef Pair<float, int> volt_measurement;
const int series_cells = 3;
const int parallel_cells = 3;
const int total_cells = series_cells * parallel_cells;

//Variables for current Sensing
Vector<Pair<float, int>> current_sense;
typedef Pair<float, int> current_measurement;

const int sensetivity = 185;  //As per datasheet of ACS712 for range of 5A
const int offsetVoltage = 2500; //(mV) Offset Voltage is Vcc/2. Assuming 5V supply is given through Arduino board.

//Variables for Temperature sensing
Vector<Pair<float, int>> temp_sense;
typedef Pair<float, int> temp_measurement;

//working of multiplexer function
void select_Multiplexer_Pin(byte pin)
{
  if (pin > total_cells) return;  // Exit the function if it is out of bound
  for (auto i = 0; i < select_line_pins.size(); i++)
  {
    if (pin &(1 << i))   //shifting the bits to activate the specific select lines
      turnOn(select_line_pins[i]);  //digitalWrite(select_line_pins[i], HIGH)
    else
      turnOff(select_line_pins[i]);  //digitalWrite(select_line_pins[i], LOW)
  }
}

float total_current_sensing()
{
  // senses the overall current of the battery pack
  int adcVoltage_pin = A9; //88
  int comm_code = 4;
  int incoming_data = 0;
  Serial.println(comm_code); 
  float adcValue = analogRead(adcVoltage_pin);
  float cellcurrent = (adcValue / 1024.0) *5000;  //converts digital value to mV
  float total_current = ((cellcurrent - offsetVoltage) / sensetivity);
  /*while (!Serial.available()){
     //do nothing
   }
  incoming_data = Serial.read();*/   
  //if(incoming_data == comm_code){
  Serial.println(total_current);          
  //}
  delay(1);
  return total_current; //returns the current sensed
  
}

float total_voltage_sensing()
{
  // senses the overall voltage of the battery pack
  int comm_code = 2;
  int incoming_data = 0;
  Serial.println(comm_code); 
  int totvolpin = A3; //94
  float totalVol = (analogRead(totvolpin)) *(5 / 1024);
  /*while (!Serial.available()){
    //do nothing
  }
  incoming_data = Serial.read();*/   
  //if(incoming_data == comm_code){
  Serial.println(totalVol);          
  //}
  delay(1);
  return totalVol;
}

void Temperature_sense()
{
  int i = 0;
  int comm_code = 5;
  int incoming_data = 0;
  Serial.println(comm_code); 
  for (int tempPin = 0; tempPin < total_cells; tempPin++)
  {
    select_Multiplexer_Pin(tempPin);
    delay(5);
    temp_measurement m(analogRead(temp_function_output) *0.48828125, tempPin);
    temp_sense.push_back(m);  // read analog volt from sensor and save to vector temp_sense
    /*while (!Serial.available()){
      //do nothing
    }
    incoming_data = Serial.read();*/   
    //if(incoming_data == comm_code){
    Serial.println(temp_sense[i++].val_1);
    delay(1);          
    //}
  } // convert the analog volt to its temperature equivalent  
} // for LM35 IC we have to multiply temperature with 0.48828125
/*LM35 sensor has three terminals - Vs, Vout and GND. We will connect the sensor as follows −
Connect the +Vs to +5v on your Arduino board.
Connect Vout to Analog0 or A0 on Arduino board.
Connect GND with GND on Arduino.
The Analog to Digital Converter (ADC) converts analog values into a digital approximation based on the formula ADC Value = sample *1024 / reference voltage (+5v).
So with a +5 volt reference, the digital approximation will be equal to input voltage *205.   */

void current_sensing()
{
  int raw_voltage = 0;
  int voltage = 0;
  int comm_code = 3;
  int incoming_data = 0;
  int i = 0;
  Serial.println(comm_code);
  for (int cur_Pin = 0; cur_Pin < total_cells; cur_Pin++)
  {
    Serial.flush();
    select_Multiplexer_Pin(cur_Pin);
    delay(5);
    raw_voltage = (analogRead(current_function_output) / 1024.0) *5000.0; //converts digital value to mV
    voltage = ((raw_voltage - offsetVoltage) / sensetivity);  //stores the current sensed in vector
    current_measurement c(voltage, cur_Pin);
    current_sense.push_back(c);
    /*while (!Serial.available()){
      //do nothing
    }
    incoming_data = Serial.read(); */  
    //if(incoming_data == comm_code){
    Serial.println(current_sense[i++].val_1);
    delay(50);          
    //}
  }
}

void voltage_sensing()    
{
  // sensing voltage of each cell
  int i = 0; 
  int comm_code = 1;
  int incoming_data = 0;
  Serial.println(comm_code);                             
  for (int pin = A0; pin< (A0 + series_cells); pin++)//(int pin = 97; pin > 97 - series_cells; pin--)
  {
    volt_measurement m(analogRead(pin) *(5 / 1024), pin);
    voltages.push_back(m);
    /*while (!Serial.available()){
      //do nothing
    }
    incoming_data = Serial.read(); */  
    //if(incoming_data == comm_code){
    Serial.println(voltages[i++].val_1);
    delay(1);          
    //}
   } 
}

//turn on the relay
void turnOn(int relayPin)
{
  digitalWrite(relayPin, HIGH); //normally open
}

// turn off the relay
void turnOff(int relayPin)
{
  digitalWrite(relayPin, LOW);  //normally close
}

//charging-discharging
bool direction_of_flow_of_current()
{
  float current = total_current_sensing();
  if (current > 0.10)
  {
    return 1; //Discharging
  }
  else
  {
    return 0; //Charging
  }
}

bool Thermal_management()
{
  // opens the relay contacts if the temperature is not within the permissible limits
  int comm_code = 8;
  int incoming_data = 0;
  int j = 0;
  bool charge = direction_of_flow_of_current();
  for (int i = 0; i < series_cells; i++)
  {
    if (charge == true)
    {
      if ((temp_sense[i].val_1) <= 0.000 || (temp_sense[i].val_1) >= 45.000){
        Serial.println(comm_code);
        /*while (!Serial.available()){
        //do nothing
        }
        incoming_data = Serial.read();*/
        return 1;  //digitalWrite(pinout, HIGH) 
        //stop the program
      }
      else
        return 0;//digitalWrite(pinout, LOW)
    }
      else
      {
        if ((temp_sense[i].val_1) <= 0.000 || (temp_sense[i].val_1) >= 55.000){
          Serial.println(comm_code);
          /*while (!Serial.available()){
          //do nothing
          }   
          incoming_data = Serial.read();*/
          return 1; // digitalWrite(pinout, HIGH)
          //stop the program
        }
        else
          return 0;  //digitalWrite(pinout, LOW)
      }
   }
}

/*A 5V relay module is used                                                         
 *The cells are connected between NC and Common pin.                                                        
 *Ground: Connects to the ground pin on the Arduino
    5V Vcc: Connects the Arduino’s 5V pin
    Signal: Carries the trigger signal from the Arduino that activates the relay
 */
bool over_current()
{
  //Over Current protection
  int comm_code = 9;
  int incoming_data = 0;
  float cellcurrent = abs(total_current_sensing());
  int relayPin = 22; //78;
  if (cellcurrent > 3.000){
    Serial.println(comm_code);
    /*while (!Serial.available()){
    //do nothing
    }   
    incoming_data = Serial.read();*/
    return 1;
    //stop the program
  }
  return 0;
}

bool voltage_protection()
{
  int comm_code_over_voltage_protection = 6;
  int comm_code_under_voltage_protection = 7;
  int incoming_data = 0;
  if(!direction_of_flow_of_current()){ //if it's charging
    for(int i=0;i<series_cells;i++){
      if (voltages[i].val_1 > 4.20){ //over voltage protection
        Serial.println(comm_code_over_voltage_protection);
        /*while (!Serial.available()){
        //do nothing
        }   
        incoming_data = Serial.read();*/
        return 1;
        //introduce battery capacity calculation measures
        }
     }
  }
  else if(direction_of_flow_of_current()){
    for(int i=0; i<series_cells; i++){
      if(voltages[i].val_1 <= 2.90){ //under voltage protection
        Serial.println(comm_code_under_voltage_protection);
        /*while (!Serial.available()){
        //do nothing
        }   
        incoming_data = Serial.read();*/ 
        return 1;      
      }    
    }
  }
  else{
    return 0; // continue standard ops
  }
}

bool cell_balancing()
{
  //cell balancing
  int cell_bal0 = 13;
  int cell_bal1 = 31;
  int cell_bal2 = 32;
  int cell_bal3 = 33;
  int cell_bal4 = 34;
  int cell_bal5 = 35;
  int cell_bal6 = 36;
  int cell_bal7 = 4;

  turnOff(cell_bal1);
  turnOff(cell_bal2);
  turnOff(cell_bal3);
  turnOff(cell_bal4);
  turnOff(cell_bal5);
  turnOff(cell_bal6);

  analogWrite (cell_bal0, 0);
  analogWrite (cell_bal7, 0);

  int comm_code_balance_off = 13;
  int comm_code_balance_on = 12;
  int incoming_data = 0;
  
  for(int i=0;i<=2;i++){
    voltages[i].val_1=(round(voltages[i].val_1*1000))/1000.0;
  }
  
  if ((voltages[0].val_1) == (voltages[1].val_1) && (voltages[1].val_1) == (voltages[2].val_1)) {
    Serial.println(comm_code_balance_off); //cell balancing offgoing
    /*while (!Serial.available()){
    //do nothing
    }   
    incoming_data = Serial.read();*/
    return true;  // do nothing
  }
  else {
    Serial.println(comm_code_balance_on); //cell balancing ongoing
    /*while (!Serial.available()){
    //do nothing
    }   
    incoming_data = Serial.read();*/
    if ((voltages[0].val_1) >= (voltages[1].val_1)) {
     if ((voltages[1].val_1) >= (voltages[2].val_1)) {
      //3rd cell SOC is the smallest
      analogWrite (cell_bal0, 64);
      analogWrite (cell_bal7, 64);
      digitalWrite (cell_bal6, HIGH);
      digitalWrite (cell_bal3, HIGH);
     }
    else {
      //2nd cell SOC is the smallest1
      analogWrite (cell_bal0, 64);
      analogWrite (cell_bal7, 64);
      digitalWrite (cell_bal5, HIGH);
      digitalWrite (cell_bal2, HIGH);
     }
  }
   else if ((voltages[1].val_1) >= (voltages[2].val_1)) {
    //3rd cell SOC is the smallest
    analogWrite (cell_bal0, 64);
    analogWrite (cell_bal7, 64);
    digitalWrite (cell_bal6, HIGH);
    digitalWrite (cell_bal3, HIGH);
   }
   else if ((voltages[3].val_1) >= (voltages[1].val_1)) {
    //1st cell SOC is the smallest
    analogWrite (cell_bal0, 64);
    analogWrite (cell_bal7, 64);
    digitalWrite (cell_bal1, HIGH);
    digitalWrite (cell_bal4, HIGH);
   }
  delay(1);
}
  return false;
}

void setup()
{
Serial.begin(19200);
select_line_pins.push_back(25);
select_line_pins.push_back(26);
select_line_pins.push_back(27);
select_line_pins.push_back(28);

  for (auto i = 0; i < select_line_pins.size(); i++)
  {
    pinMode(select_line_pins[i], OUTPUT);
    turnOff(select_line_pins[i]);  //digitalWrite(select_line_pins[i]
  }

  current_sense[6].val_1 = 0.0;
  
  pinMode(current_function_output, INPUT);
  pinMode(temp_function_output, INPUT);
  pinMode(A9, INPUT);
  pinMode(A3, INPUT);
  pinMode(A0, INPUT);

  
  pinMode(22, OUTPUT);
  turnOff(22);
  pinMode(31, OUTPUT);
  turnOff(31);
  pinMode(32, OUTPUT);
  turnOff(32);
  pinMode(33, OUTPUT);
  turnOff(33);
  pinMode(34, OUTPUT);
  turnOff(34);
  pinMode(35, OUTPUT);
  turnOff(35);
  pinMode(36, OUTPUT);
  turnOff(36);
  pinMode(13, OUTPUT);
  turnOff(13);
  pinMode(4, OUTPUT);
  turnOff(4);
  
 //Control of PWM for Cell Balancing
  int myPretimer = 7;
  TCCR0B &= ~myPretimer;           
  int myReqtimer = 4;
  TCCR0B |= myReqtimer;

  delay(1000);
  /*while (!Serial.available()){
      //do nothing
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(LED_BUILTIN, LOW);
  }
  int begin_program = Serial.read();*/
  digitalWrite(LED_BUILTIN, LOW);
}

void loop()
{
  bool balance = false;
  bool charge;
  current_sense.clear();
  temp_sense.clear();
  voltages.clear();
  // put your main code here, to run repeatedly:
  voltage_sensing();
  total_voltage_sensing();
  current_sensing();
  total_current_sensing();
  Temperature_sense();
  
  if (voltage_protection()){
    turnOn(relayPin);
  }
  else if(Thermal_management()){
    turnOn(relayPin);
  }
  else if(over_current()){
    turnOn(relayPin);
    delay(60000);
  }
  else{
    turnOff(relayPin);
  }
  
  charge = direction_of_flow_of_current();
  int comm_code_charge = 10;
  int comm_code_discharge = 11;
  int incoming_data;
  if(charge){
    Serial.println(comm_code_charge);
    while (!Serial.available()){
     //do nothing
    }
    incoming_data = Serial.read();
  }
  else{
    Serial.println(comm_code_discharge);
    while (!Serial.available()){
     //do nothing
    }
    incoming_data = Serial.read();             
  }
  balance = cell_balancing();
}
