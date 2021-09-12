const int BUTTON_PIN = 4;  // arduino sensor kit
//const int BUTTON_PIN = 6;  // grove beginner kit
const int LED_PIN = 6;  // arduino sensor kit
//const int LED_PIN = 4;  // grove beginner kit

int button_state = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop(){
  button_state = digitalRead(BUTTON_PIN);

  if (button_state == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}
