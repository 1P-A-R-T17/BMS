void setup() {
  // put your setup code here, to run once:
  pinMode(22, OUTPUT);
  digitalWrite(22, LOW);
  digitalWrite(LED_BUILTIN, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(22, HIGH);
  digitalWrite(LED_BUILTIN, HIGH); // normally open runs
  delay(2000);
  digitalWrite(22, LOW);
  digitalWrite(LED_BUILTIN, LOW); // normally closed runs
  delay(2000);

}
