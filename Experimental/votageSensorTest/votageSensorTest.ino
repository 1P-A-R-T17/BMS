void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float voltage = (analogRead(A0) *(5.00 / 1024.00)*4.7951807);
  Serial.println(voltage);
  delay(2000);
}
