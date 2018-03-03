#include "AdaTSL2561Sensor.h"

AdaTSL2561Sensor::AdaTSL2561Sensor(const char* name_) : Sensor(name_), _luxmeter(TSL2561_ADDR_FLOAT) {
  _luxmeter.begin();
  _luxmeter.enableAutoRange(true);
  _luxmeter.setIntegrationTime(TSL2561_INTEGRATIONTIME_402MS);
}

const int32_t AdaTSL2561Sensor::getValue() {
  sensors_event_t event;
  _luxmeter.getEvent(&event);
  return event.light;
}
