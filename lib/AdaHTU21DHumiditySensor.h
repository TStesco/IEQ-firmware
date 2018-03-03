/**
 * AdaHTU21DHumiditySensor.h
 *
 * Defines the class for Adafruit Humidity Sensor.
 */

#ifndef ADAHTU21DHUMIDITYSENSOR_H
#define ADAHTU21DHUMIDITYSENSOR_H

#include "Sensor.h"
#include "VayusAdafruit_HTU21DF.h"

class AdaHTU21DHumiditySensor : public Sensor {
public:
  AdaHTU21DHumiditySensor(const char* name_);
  const int32_t getValue(); // Returns unmapped humidity value
private:
  VayusAdafruit_HTU21DF _hygrometer;
};

#endif
