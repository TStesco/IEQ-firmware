#include "Uploader.h"
#include <HttpClient.h>

#define SUCCESS 0 // Return codes - http://curl.haxx.se/libcurl/c/libcurl-errors.html

Uploader::Uploader(String url) : _apiUrl(url) {}

void Uploader::upload(String encodedData, uint8_t numTries) {
  for (uint8_t i = 0; i < numTries; i++) {
    HttpClient client;
    client.noCheckSSL();
    if (client.post(_apiUrl, encodedData) == SUCCESS) {
      break;
    }
  }
}
