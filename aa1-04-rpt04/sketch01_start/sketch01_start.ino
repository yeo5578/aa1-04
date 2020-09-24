int pinNum = 13;

void setup() {
  pnMode(pinNum, OUTPUT);
}

void loop() {
  digitalWrite(pinNum, HIGH);
  delay(1000);
  digitalWrite(pinNum, LOW);
  delay(1000);
}
