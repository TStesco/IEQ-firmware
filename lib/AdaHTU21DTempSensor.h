/**
 * AdaHTU21DTempSensor.h
 *
 * Defines the class for Adafruit Temperature Sensor.
 */

#ifndef ADAHTU21DTEMPSENSOR_H
#define ADAHTU21DTEMPSENSOR_H

#include "Sensor.h"
#include "VayusAdafruit_HTU21DF.h"

class AdaHTU21DTempSensor : public Sensor {
public:
  AdaHTU21DTempSensor(const char* name_);
  const int32_t getValue(); // Returns unmapped temperature value
private:
  VayusAdafruit_HTU21DF _thermometer;
};

#endif
