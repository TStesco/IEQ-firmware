/**
 * Sensor.h
 *
 * Defines the top-level, abstract Sensor class.
 */

#ifndef SENSOR_H
#define SENSOR_H

#include <stdint.h>

class Sensor {
public:
  Sensor(const char* name_) : name(name_) {}
  const char* getFieldName() { return name; }
  virtual const int32_t getValue() = 0;
protected:
  const char* name;
};

#endif
