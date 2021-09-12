#include "Arduino_SensorKit.h"

void setup() {
  Accelerometer.begin();

  Oled.setBusClock(100000);
  Oled.begin();
  Oled.setFlipMode(true);
  Oled.setFont(u8x8_font_chroma48medium8_r);
}

void loop() {
  float acc_x = Accelerometer.readX();
  float acc_y = Accelerometer.readY();
  float acc_z = Accelerometer.readZ();

  Oled.setCursor(0, 0);
  Oled.print("ACC X:        ");
  Oled.setCursor(7, 0);
  Oled.print(acc_x);
  Oled.setCursor(0, 1);
  Oled.print("ACC Y:        ");
  Oled.setCursor(7, 1);
  Oled.print(acc_y);
  Oled.setCursor(0, 2);
  Oled.print("ACC Z:        ");
  Oled.setCursor(7, 2);
  Oled.print(acc_z);

  delay(1000);
}
