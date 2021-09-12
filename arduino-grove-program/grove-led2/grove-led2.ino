const int LED_PIN = 6;  // arduino sensor kit
//const int LED_PIN = 4;  // grove beginner kit
const int LED2_PIN = 7;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(LED2_PIN, LOW);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
  delay(1000);
}
