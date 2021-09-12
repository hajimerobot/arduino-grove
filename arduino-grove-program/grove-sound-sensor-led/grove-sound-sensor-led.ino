const int SOUND_PIN = A2;
const int  LED_PIN = 6;  // arduino sensor kit
//const int  LED_PIN = 4;  // grove beginner kit

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int sound_value = analogRead(SOUND_PIN);
  int sound_value_percent = map(sound_value, 0, 1023, 0, 100);

  if (sound_value_percent >= 70) {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}
