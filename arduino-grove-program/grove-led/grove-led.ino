const int LED_PIN = 6;  // arduino sensor kit
//const int LED_PIN = 4;  // grove beginner kit

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
