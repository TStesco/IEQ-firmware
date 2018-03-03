/**
 * Grove10DOFSensor.h
 *
 * Defines the class for Grove BP and Axis Sensor.
 */

#ifndef GROVE10DOFSENSOR_H
#define GROVE10DOFSENSOR_H

#include "Sensor.h"
#include <BMP180.h> // BMP180 library under copyright of LG

class Grove10DOFSensor : public Sensor {
public:
  Grove10DOFSensor(const char* name_);
  const int32_t getValue(); // Returns Pressure in Pascals
private:
  BMP180 _barometer;
};

#endif
