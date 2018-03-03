#include "SensorHandler.h"
#include "AdaHTU21DHumiditySensor.h"
#include "AdaHTU21DTempSensor.h"
#include "AdaTSL2561Sensor.h"
#include "AnalogSensor.h"
#include "Grove10DOFSensor.h"
#include "MiCSVZ89FSensor.h"

SensorHandler::SensorHandler() {
  uint8_t i = 0;

#if ANALOG_CO2_SENSOR
  _sensors[i++] = new AnalogSensor("co2", A0);
#endif

#if ANALOG_SOUND_SENSOR
  _sensors[i++] = new AnalogSensor("sound", A1);
#endif

#if ANALOG_O2_SENSOR
  _sensors[i++] = new AnalogSensor("o2", A2);
#endif

#if ANALOG_AIR_FLOW_SENSOR
  _sensors[i++] = new AnalogSensor("airFlow", A3);
#endif

#if ANALOG_TEMPERATURE_SENSOR
  _sensors[i++] = new AnalogSensor("temperature_alt", A4);
#endif

#if ANALOG_LIGHT_SENSOR
  _sensors[i++] = new AnalogSensor("light_alt", A5);
#endif

#if ANALOG_COAL_SENSOR
  _sensors[i++] = new AnalogSensor("coal", A6);
#endif

#if GROVE10DOF_SENSOR
  _sensors[i++] = new Grove10DOFSensor("pressure");
#endif

#if ADAHTU21D_HUMIDITY_SENSOR
  _sensors[i++] = new AdaHTU21DHumiditySensor("humidity");
#endif

#if ADAHTU21D_TEMPERATURE_SENSOR
  _sensors[i++] = new AdaHTU21DTempSensor("temperature");
#endif

#if ADATSL2561_SENSOR
  _sensors[i++] = new AdaTSL2561Sensor("light");
#endif

#if MICSVZ89F_SENSOR
  _sensors[i++] = new MiCSVZ89FSensor("voc");
#endif
}

SensorHandler::~SensorHandler() {
  for (uint8_t i = 0; i < SENSOR_COUNT; i++) {
    delete _sensors[i];
  }
}

String SensorHandler::getUrlEncodedData() {
  String urlEncodedData = "";
  for (uint8_t i = 0; i < SENSOR_COUNT; i++) {
    if (i > 0) {
      urlEncodedData += '&';
    }
    urlEncodedData += _sensors[i]->getFieldName() + String("=") + _sensors[i]->getValue();
  }
  return urlEncodedData;
}
