#include "Arduino_SensorKit.h"

void setup() {
  Oled.setBusClock(100000);  // I2C clock = 100kHz
  Oled.begin();
  Oled.setFlipMode(true);
  Oled.setFont(u8x8_font_chroma48medium8_r);
}

void loop() {
  int random_value = analogRead(A0);

  Oled.setCursor(0, 0);
  Oled.print("Analog :      ");
  Oled.setCursor(9, 0);
  Oled.print(random_value);

  delay(1000);
}
