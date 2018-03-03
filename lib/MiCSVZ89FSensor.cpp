#include "MiCSVZ89FSensor.h"
#include <Wire.h>

#define READ_INSTRUCTION 0b00001001
#define MiCSVZ89F_ADDRESS 0x70

MiCSVZ89FSensor::MiCSVZ89FSensor(const char* name_) : Sensor(name_) {
  Wire.begin();
}

const int32_t MiCSVZ89FSensor::getValue() {
  int32_t equivalentCO2 = 0;

  Wire.beginTransmission(MiCSVZ89F_ADDRESS);
  Wire.write(READ_INSTRUCTION);
  Wire.endTransmission();
  Wire.requestFrom(MiCSVZ89F_ADDRESS, 6);

  if (Wire.available()) {
    equivalentCO2 = Wire.read();
  }
  // Drain all remaining bytes
  while (Wire.available()) {
    Wire.read();
  }

  return equivalentCO2;
}
