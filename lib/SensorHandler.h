/**
 * SensorHandler.h
 *
 * Defines the class which is called to read data from the sensors.
 * Stores the sensor data, then can be told to upload the data to a web server.
 */

#ifndef SENSORHANDLER_H
#define SENSORHANDLER_H

#include "config.h"
#include "Sensor.h"
#include <Arduino.h>

class SensorHandler {
public:
  SensorHandler();
  ~SensorHandler();
  String getUrlEncodedData();
private:
  Sensor* _sensors[SENSOR_COUNT];
};

#endif
