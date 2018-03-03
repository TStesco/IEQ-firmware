/**
 * AdaTSL2561Sensor.h
 *
 * Defines the class for the Adafruit TSL2561 Light Sensor.
 * Inherits from Sensor.
 */

#ifndef ADATSL2561SENSOR_H
#define ADATSL2561SENSOR_H

#include "Sensor.h"
#include <Adafruit_TSL2561_U.h> // Adafruit license under copyright of Adafruit, authored by K. Townsend

class AdaTSL2561Sensor : public Sensor {
public:
  AdaTSL2561Sensor(const char* name_);
  const int32_t getValue();
private:
  Adafruit_TSL2561_Unified _luxmeter;
};

#endif
