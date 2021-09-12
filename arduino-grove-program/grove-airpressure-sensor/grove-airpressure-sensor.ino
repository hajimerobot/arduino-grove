#include "Arduino_SensorKit.h"

void setup() {
  Pressure.begin();
  Serial.begin(9600);
}

void loop() {
  float temp = Pressure.readTemperature();
  float pres = Pressure.readPressure();
  float alti = Pressure.readAltitude();

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.println(" C");

  Serial.print("Pressure: ");
  Serial.print(pres/100.0);  // 1/100 = Pa -> hPa
  Serial.println(" hPa");

  Serial.print("Altitude: ");
  Serial.print(alti);
  Serial.println(" m");

  Serial.println("");
  delay(1000);
}
