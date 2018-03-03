#include "AdaHTU21DHumiditySensor.h"

AdaHTU21DHumiditySensor::AdaHTU21DHumiditySensor(const char* name_) : Sensor(name_) {}

const int32_t AdaHTU21DHumiditySensor::getValue() {
  _hygrometer.getHumidity();
}
