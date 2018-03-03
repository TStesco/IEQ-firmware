#include "AdaHTU21DTempSensor.h"

AdaHTU21DTempSensor::AdaHTU21DTempSensor(const char* name_) : Sensor(name_) {}

const int32_t AdaHTU21DTempSensor::getValue() {
  _thermometer.getTemperature();
}
