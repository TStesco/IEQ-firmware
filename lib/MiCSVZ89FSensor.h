/**
 * MiCSVZ89FSensor.h
 *
 * Defines the class for MiCS-VZ-89F volatile organic compound (VOC) Sensor.
 * This sensor uses the I2C protocol.
 */

#ifndef VOCSENSOR_H
#define VOCSENSOR_H

#include "Sensor.h"

class MiCSVZ89FSensor : public Sensor {
public:
  MiCSVZ89FSensor(const char* name_);
  const int32_t getValue(); // Returns VOC in CO2 equivalent
};

#endif
