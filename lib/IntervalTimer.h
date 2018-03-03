/**
 * IntervalTimer.h
 */

#ifndef INTERVALTIMER_H
#define INTERVALTIMER_H

#include <stdint.h>

class IntervalTimer {
public:
  /**
   * Constructor
   *
   * @param interval The amount of time for the interval in milliseconds.
   * @param startAsPassed If true, intervalHasPassed() will be guaranteed
   *                      to return true the first time it is called.
   */
  IntervalTimer(uint32_t interval, bool startAsPassed = false);

  /**
   * Determines if the interval time has passed.
   *
   * This function will return true even if several time intervals have passed.
   * After it is called, if true was returned, the interval reference time will
   * be updated to the current time, which means that it will return false if
   * called again immediately after.
   *
   * @returns true if the interval time has passed since the timer was created
   *          or since intervalHasPassed() was last called; false otherwise.
   */
  bool intervalHasPassed();

private:
  uint32_t _interval;
  uint32_t _lastTime;
  bool _startAsPassed;
};

#endif
