const int BUZZER_PIN = 5;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  tone(BUZZER_PIN, 85);  // on
  delay(500);
  noTone(BUZZER_PIN);  // off
  delay(500);
}
