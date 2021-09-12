const int SOUND_PIN = A2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sound_value = analogRead(SOUND_PIN);
  int sound_value_percent = map(sound_value, 0, 1023, 0, 100);

  Serial.print("Sound : ");
  Serial.println(sound_value_percent);

  delay(10);
}
