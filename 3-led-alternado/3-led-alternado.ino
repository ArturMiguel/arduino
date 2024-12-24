int redLedPin = 9;
int greenLedPin = 8;

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}

void loop() {
  digitalWrite(redLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(1000);
  digitalWrite(redLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  delay(1000);
}
