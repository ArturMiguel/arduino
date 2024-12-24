void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // configura o pino digital 13 como saída
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // ativa o pino digital 13
  delay(5000);
  digitalWrite(LED_BUILTIN, LOW); // desativa o pino digital 13
  delay(100);
}