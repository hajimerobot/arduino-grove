const int LIGHT_PIN = A3;  // arduino sensor kit
//const int LIGHT_PIN = A6;  // grove beginner kit
const int LED_PIN = 6;  // arduino sensor kit
//const int LED_PIN = 4;  // grove beginner kit

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int light_value = analogRead(LIGHT_PIN);
  int light_value_percent = map(light_value, 0, 1023, 0, 100);

  if (light_value_percent < 20) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}
