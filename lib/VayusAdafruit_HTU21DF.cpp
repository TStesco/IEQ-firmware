#include "VayusAdafruit_HTU21DF.h"

int32_t VayusAdafruit_HTU21DF::getTemperature() {
  Wire.beginTransmission(HTU21DF_I2CADDR);
  Wire.write(HTU21DF_READTEMP);
  Wire.endTransmission();

  delay(50); // Add delay between request and actual read!

  Wire.requestFrom(HTU21DF_I2CADDR, 3);
  while (!Wire.available()) {}

  uint16_t t = Wire.read();
  t <<= 8;
  t |= Wire.read();

  uint8_t crc = Wire.read();

  return t;
}

int32_t VayusAdafruit_HTU21DF::getHumidity() {
  Wire.beginTransmission(HTU21DF_I2CADDR);
  Wire.write(HTU21DF_READHUM);
  Wire.endTransmission();

  delay(50); // Add delay between request and actual read!

  Wire.requestFrom(HTU21DF_I2CADDR, 3);
  while (!Wire.available()) {}

  uint16_t h = Wire.read();
  h <<= 8;
  h |= Wire.read();

  uint8_t crc = Wire.read();

  return h;
}
