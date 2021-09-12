#include "Arduino_SensorKit.h"

void setup() {
  Accelerometer.begin();
  Serial.begin(9600);
}

void loop() {
  float acc_x = Accelerometer.readX();
  float acc_y = Accelerometer.readY();
  float acc_z = Accelerometer.readZ();

  Serial.print("Accelerometer X:");
  Serial.print(acc_x);
  Serial.print(",  ");
  Serial.print("Y:");
  Serial.print(acc_y);
  Serial.print(",  ");
  Serial.print("Z:");
  Serial.println(acc_z);

  delay(100);
}
