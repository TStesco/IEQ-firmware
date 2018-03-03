#ifndef VAYUS_H
#define VAYUS_H

#include "config.h"
#include "IntervalTimer.h"
#include "SensorHandler.h"
#include "Uploader.h"

// This is a pointer so that its constructor can be called in vayusSetup, which is necessary
// because I2C sensors can't be initialized before the sketch's setup function
SensorHandler* sensorHandler;
IntervalTimer timer(SAMPLE_TIME, true);
Uploader uploader(String(API_URL));

void vayusSetup() {
  sensorHandler = new SensorHandler();
}

void vayusLoop() {
  if (timer.intervalHasPassed()) {
    uploader.upload(sensorHandler->getUrlEncodedData(), NUM_UPLOAD_TRIES);
  }
}

#endif
