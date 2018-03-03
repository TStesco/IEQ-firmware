#include <Arduino.h>
#include "AnalogSensor.h"


AnalogSensor::AnalogSensor(const char* name_, const uint8_t pin_)
  : Sensor(name_), pin(pin_) {}

const int32_t AnalogSensor::getValue() {
  return analogRead(pin);
}
