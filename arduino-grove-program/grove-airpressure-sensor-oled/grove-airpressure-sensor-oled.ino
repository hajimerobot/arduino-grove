#include "Arduino_SensorKit.h"

void setup() {
  Pressure.begin();

  Oled.setBusClock(100000);
  Oled.begin();
  Oled.setFlipMode(true);
  Oled.setFont(u8x8_font_chroma48medium8_r);
}

void loop() {
  float temp = Pressure.readTemperature();
  float pres = Pressure.readPressure();
  float alti = Pressure.readAltitude();

  Oled.setCursor(0, 0);
  Oled.print("Temp:        ");
  Oled.setCursor(6, 0);
  Oled.print(temp);
  Oled.setCursor(0, 1);
  Oled.print("Pres:        ");
  Oled.setCursor(6, 1);
  Oled.print(pres/100.0);  // 1/100 = Pa -> hPa
  Oled.setCursor(0, 2);
  Oled.print("Alti:        ");
  Oled.setCursor(6, 2);
  Oled.print(alti);

  delay(1000);
}
