/**
 * Uploader.h
 *
 * Takes sensor data and uploads it to our web server.
 */

#ifndef UPLOADER_H
#define UPLOADER_H

#include <Arduino.h>

class Uploader {
public:
  Uploader(String url);
  void upload(String encodedData, uint8_t numTries);
private:
  String _apiUrl;
};

#endif
