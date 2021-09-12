const int POT_PIN = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int pot_value = analogRead(POT_PIN);
  int pot_value_percent = map(pot_value, 0, 1023, 0, 100);

  Serial.print("Potentiometer : ");
  Serial.print(pot_value);
  Serial.print(", ");
  Serial.print(pot_value_percent);
  Serial.println(" %");

  delay(100);
}
