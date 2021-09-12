//#define DHTPIN 3
#include "Arduino_SensorKit.h"

void setup() {
  Environment.begin();
  Serial.begin(9600);
}

void loop() {
  float temp = Environment.readTemperature();
  float humi = Environment.readHumidity();

  Serial.print("Temperature = ");
  Serial.print(temp);
  Serial.print(" C, ");
  Serial.print("Humidity = ");
  Serial.print(humi);
  Serial.println(" %");

  delay(1000);
}
