//#define DHTPIN 3
#include "Arduino_SensorKit.h"

void setup() {
  Environment.begin();

  Oled.setBusClock(100000);
  Oled.begin();
  Oled.setFlipMode(true);
  Oled.setFont(u8x8_font_chroma48medium8_r);
}

void loop() {
  float temp = Environment.readTemperature();
  float humi = Environment.readHumidity();

  Oled.setCursor(0, 0);
  Oled.print("Temp:        ");
  Oled.setCursor(6, 0);
  Oled.print(temp);
  Oled.setCursor(0, 1);
  Oled.print("Humi:        ");
  Oled.setCursor(6, 1);
  Oled.print(humi);

  delay(1000);
}
