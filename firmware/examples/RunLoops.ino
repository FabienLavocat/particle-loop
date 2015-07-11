// Use this include for the Web IDE:
#include "particle-loop/particle-loop.h"

Loop cloudSyncTimeLoop(ONE_DAY_SECONDS);

void setup(void) {
	
}

void loop(void) {
	cloudSyncTimeLoop.run(&cloudSyncTime);
	
	delay(1000);
}

// Synchronize the time with the Particle Cloud.
// This happens automatically when the device connects to the Cloud.
// However, if your device runs continuously for a long time, you may want to synchronize once per day or so.
void cloudSyncTime() {
    Spark.syncTime();
}