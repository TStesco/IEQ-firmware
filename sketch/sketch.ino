/**
 * Firmware main entry point
 */

#include <Wire.h> // Must be included first

#include <vayus.h>
#include <Adafruit_HTU21DF.h>
#include <Adafruit_TSL2561_U.h>
#include <BMP180.h>
#include <Console.h>
#include <HttpClient.h>

void setup() {
  Bridge.begin();
  Console.begin();
  vayusSetup();
}

void loop() {
  vayusLoop();
}
