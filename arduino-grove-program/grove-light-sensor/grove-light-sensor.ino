const int LIGHT_PIN = A3;  // arduino sensor kit
//const int LIGHT_PIN = A6;  // grove beginner kit

void setup() {
  Serial.begin(9600);
}

void loop() {
  int light_value = analogRead(LIGHT_PIN);
  int light_value_percent = map(light_value, 0, 1023, 0, 100);

  Serial.print("Light : ");
  Serial.print(light_value_percent);
  Serial.println(" %");

  delay(500);
}
