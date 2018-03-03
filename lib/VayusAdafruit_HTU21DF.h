/**
 * VayusAdafruit_HTU21DF.h
 *
 * This library customizes the Adafruit library for the HTU21DF sensor as needed for Vayus.
 * Specifically, it returns the unmapped values of temperature and humidity.
 * This is done because we need the return value to be an int32_t.
 */

#ifndef VAYUSADAFRUITHTU21DF_H
#define VAYUSADAFRUITHTU21DF_H

#include <Adafruit_HTU21DF.h> // Library written by Limor Fried/Ladyada for Adafruit Industries

class VayusAdafruit_HTU21DF : Adafruit_HTU21DF {
public:
  int32_t getTemperature();
  int32_t getHumidity();
};

#endif
