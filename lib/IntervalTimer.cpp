#include "IntervalTimer.h"
#include <Arduino.h>

#ifndef UINT32_MAX
#define UINT32_MAX 0xffffffffUL
#endif

IntervalTimer::IntervalTimer(uint32_t interval, bool startAsPassed)
  : _interval(interval), _startAsPassed(startAsPassed), _lastTime(0) {}

bool IntervalTimer::intervalHasPassed() {
  uint32_t now = millis();

  if (_startAsPassed == true) {
    _startAsPassed = false;
    _lastTime = now;
    return true;
  }

  bool hasPassed = false;

  if (now < _lastTime) { // Handle overflow case
    hasPassed = UINT32_MAX - _lastTime + now + 1 >= _interval;
  } else {
    hasPassed = now - _lastTime >= _interval;
  }

  if (hasPassed) {
    _lastTime = now;
  }

  return hasPassed;
}
