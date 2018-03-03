/**
 * config.h - Device configuration. Contains important #defines.
 */

#ifndef CONFIG_H
#define CONFIG_H

#include <stdint.h>

/**
 * The unique identifier for the device.
 */
#define DEVICE_ID "4500000001"

/**
 * The URL to which the data should be sent.
 */
#define API_URL "http://ec2-52-3-176-4.compute-1.amazonaws.com/v1/device/"DEVICE_ID"/rawdata"

/**
 * The amount of time between reading and uploading the sensor data.
 */
#define SAMPLE_TIME 30000 // 30 seconds

/**
 * The number of times to try sending the data before giving up.
 */
#define NUM_UPLOAD_TRIES 3

/**
 * Defined sensors. If defined as 1, the sensor will be included in the compilation; if 0, it will be excluded.
 */
#define ANALOG_CO2_SENSOR 1
#define ANALOG_SOUND_SENSOR 1
#define ANALOG_O2_SENSOR 1
#define ANALOG_AIR_FLOW_SENSOR 1
#define ANALOG_TEMPERATURE_SENSOR 1
#define ANALOG_LIGHT_SENSOR 1
#define ANALOG_COAL_SENSOR 1
#define GROVE10DOF_SENSOR 1
#define ADAHTU21D_HUMIDITY_SENSOR 1
#define ADAHTU21D_TEMPERATURE_SENSOR 1
#define ADATSL2561_SENSOR 1
#define MICSVZ89F_SENSOR 1

/**
 * The number of sensors to use.
 */
const uint8_t SENSOR_COUNT =
  ANALOG_CO2_SENSOR +
  ANALOG_SOUND_SENSOR +
  ANALOG_O2_SENSOR +
  ANALOG_AIR_FLOW_SENSOR +
  ANALOG_TEMPERATURE_SENSOR +
  ANALOG_LIGHT_SENSOR +
  ANALOG_COAL_SENSOR +
  GROVE10DOF_SENSOR +
  ADAHTU21D_HUMIDITY_SENSOR +
  ADAHTU21D_TEMPERATURE_SENSOR +
  ADATSL2561_SENSOR +
  MICSVZ89F_SENSOR;

#endif
