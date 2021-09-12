const int POT_PIN = A0;
const int LED_PIN = 6;  // arduino sensor kit
//const int LED_PIN = 4;  // grove beginner kit

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int pot_value = analogRead(POT_PIN);
  int param_delay = map(pot_value, 0, 1023, 0, 2000);

  digitalWrite(LED_PIN, HIGH);
  delay(param_delay);
  digitalWrite(LED_PIN, LOW);
  delay(param_delay);
}
