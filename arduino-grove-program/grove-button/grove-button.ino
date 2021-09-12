const int BUTTON_PIN = 4;  // arduino sensor kit
//const int BUTTON_PIN = 6;  // grove beginner kit

int button_state = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop(){
  button_state = digitalRead(BUTTON_PIN);

  if (button_state == HIGH) {
    Serial.println("Button pressed!");
  }

  delay(50);
}
