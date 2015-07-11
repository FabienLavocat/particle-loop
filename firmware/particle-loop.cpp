#include "particle-loop.h"

Loop::Loop(int intervalInSeconds) {
	secondsSinceLastRun = 0;
	interval = intervalInSeconds;
}

void Loop::run(void (*function)(void)) {

  time_t timeNow = now();
  if (timeNow - secondsSinceLastRun <= interval) {
    return;
  }
  secondsSinceLastRun = timeNow;
  function();
}