const int SOUND_PIN = A2;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sound_value = analogRead(SOUND_PIN);
  int sound_value_percent = map(sound_value, 0, 1023, 0, 100);

  Serial.print(sound_value_percent);
  Serial.print(",");
  Serial.print(0);
  Serial.print(",");
  Serial.println(100);
}
