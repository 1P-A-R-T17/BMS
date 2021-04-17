#include<Vector.h>
#include<Pair.h>
#include<Arduino.h>
#include<ArduinoSTL.h>

//select line multiplexer variables
vector<int> select_line_pins = {93,92,91,90};
const int current_function_output = 89;       //Pin number for current sensing
const int temp_function_output = 84;          //Pin number for temperature sensing



//voltage sensing variable
Vector<Pair<double,int>> voltages;
typedef Pair<double,int> volt_measurement;
const int series_cells = 3;
const int parallel_cells = 3;
const int total_cells = series_cells * parallel_cells;

//Variables for current Sensing
Vector<Pair<double,int>> current_sense;
typedef Pair<double,int> current_measurement;
 
const int sensetivity = 185;                //As per datasheet of ACS712 for range of 5A
const int offsetVoltage = 2500;              //(mV) Offset Voltage is Vcc/2. Assuming 5V supply is given through Arduino board.

//Variables for Temperature sensing
Vector<Pair<double,int>> temp_sense;
typedef Pair<double,int> temp_measurement;

//working of multiplexer function
void select_Multiplexer_Pin(byte pin)
{
  if (pin > total_cells) return; // Exit the function if it is out of bound
  for (auto i=0; i<select_line_pins.size(); i++)
  {
    if (pin & (1<<i))
      digitalWrite(select_line_pins[i], HIGH);
    else
      digitalWrite(select_line_pins[i], LOW);
  }
}


void Temperature_sense(){
  for(int tempPin = 0 ; tempPin <total_cells) ; tempPin++){
    select_Multiplexer_Pin(tempPin);
   temp_measurement m(analogRead(temp_function_output)*0.48828125,tempPin);
    temp_sense.push_back(m);                                                    // read analog volt from sensor and save to vector temp_sense
     }                                                                            // convert the analog volt to its temperature equivalent  
}                                                                             // for LM35 IC we have to multiply temperature with 0.48828125
   /*LM35 sensor has three terminals - Vs, Vout and GND. We will connect the sensor as follows −
Connect the +Vs to +5v on your Arduino board.
Connect Vout to Analog0 or A0 on Arduino board.
Connect GND with GND on Arduino.
The Analog to Digital Converter (ADC) converts analog values into a digital approximation based on the formula ADC Value = sample * 1024 / reference voltage (+5v).
So with a +5 volt reference, the digital approximation will be equal to input voltage * 205.   */                                                                 
                                                                         

void current_sensing()
{
  int raw_voltage = 0;
  int voltage = 0;
  
  for(int cur_Pin = 0 ; cur_Pin < total_cells ; cur_Pin++){
    select_Multiplexer_Pin(cur_Pin);
  raw_voltage = (analogRead(current_function_output) / 1024.0) * 5000;            //converts digital value to mV
  voltage = ((raw_voltage - offsetVoltage)/sensetivity);                             //stores the current sensed in vector
  current_measurement c(voltage,cur_pin);
  current_sense.push_back(c);
  }
}


void voltage_sensing() 
{
  // sensing voltage of each cell

  for (int pin=97; pin > 97-series_cells; pin--)           
  {
    volt_measurement m(analogRead(pin)*(5/1024),pin);
    voltages.push_back(m);
  }
}
//turn on the relay
void turnOn(int relayPin)
{
  digitalWrite(relayPin, HIGH);//normally open
}
// turn off the relay
void turnOff(int relayPin)
{
  digitalWrite(relayPin, LOW);//normally close
}



//charging-discharging
bool direction_of_flow_of_current()
{
  double current=current_sensing();
  if(current>0)
  {
    return 1;
  }
  else
  { 
    return 0;
  } 
}

 void Thermal_management(){
  // opens the relay contacts if the temperature is not within the permissible limits
  int pinout = 78;
  bool charge = direction_of_flow_of_current();
  for (int i=0; i<series_cells; i++)
  {
    if (charge == true)
    {
      if ((temp_sense[i].val_1) <= 0.000 || (temp_sense[i].val_1) >= 45.000)
        digitalWrite(pinout, HIGH); // turnOn(pinout)
      else
        digitalWrite(pinout, LOW);  //turnoff(pinout)
    }
    else
    {
      if ((temp_sense[i].val_1) <= 0.000 || (temp_sense[i].val_1) >= 55.000)
        digitalWrite(pinout, HIGH);   //turnOn(pinout)
      else
        digitalWrite(pinout, LOW);    //turnoff(pinout)
    }
  }
}     
/*A 5V relay module is used                                                         
 *  The cells are connected between NC and Common pin.                                                        
 *  Ground: Connects to the ground pin on the Arduino
    5V Vcc: Connects the Arduino’s 5V pin
    Signal: Carries the trigger signal from the Arduino that activates the relay
 */

void setup() {
Serial.begin(9600);

 for (auto i=0; i< select_line_pins.size(); i++)
  {
    pinMode(select_line_pins[i], OUTPUT);
    digitalWrite(select_line_pins[i], LOW);
  }
  pinMode(current_function_output, OUTPUT); 
   pinMode(temp_function_output, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage_sensing();
  current_sensing();
 Temperature_sense();
  Thermal_management();
  cell_balancing();
}