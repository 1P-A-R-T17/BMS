const float sensetivity = 185.0;  //As per datasheet of ACS712 for range of 5A
const float offsetVoltage = 2365.00;  //(mV) Offset Voltage is Vcc/2. Assuming 5V supply is given through Arduino board.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int adcValue = analogRead(A0);
  float cellcurrent = (adcValue / 1023.0) *4730;  //converts digital value to mV
  float total_current = ((cellcurrent - offsetVoltage) / (sensetivity));
  Serial.println(total_current);
  total_current=0.0;
  delay(1000);
}
