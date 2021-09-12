const int BUZZER_PIN = 5;
const int POT_PIN = A0;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int pot_value = analogRead(POT_PIN);
  int pot_value_buzzer = map(pot_value, 0, 1023, 31, 2000);

  tone(BUZZER_PIN, pot_value_buzzer);
}
