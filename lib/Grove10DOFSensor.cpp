#include "Grove10DOFSensor.h"

Grove10DOFSensor::Grove10DOFSensor(const char* name_) : Sensor(name_) {
  _barometer.init();
}

const int32_t Grove10DOFSensor::getValue() {
  _barometer.bmp180GetTemperature(_barometer.bmp180ReadUT());
  return _barometer.bmp180GetPressure(_barometer.bmp180ReadUP());
}
