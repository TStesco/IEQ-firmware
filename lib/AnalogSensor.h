/**
 * AnalogSensor.h
 *
 * Defines the class for those analog sensors that are being read directly from an analog pin.
 * Inherits from Sensor.
 */

#ifndef ANALOGSENSOR_H
#define ANALOGSENSOR_H

#include "Sensor.h"

class AnalogSensor : public Sensor {
public:
  AnalogSensor(const char* name_, const uint8_t pin_);
  const int32_t getValue();
protected:
  const uint8_t pin;
};

#endif
