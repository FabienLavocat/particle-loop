#ifndef Loop_h
#define Loop_h

#include "application.h"
#include "time.h"

//---------------------------------

#define now() (Time.now())

#define ONE_MINUTE_SECONDS (60)
#define ONE_HOUR_SECONDS (60 * 60)
#define ONE_DAY_SECONDS (24 * 60 * 60)

class Loop
{
  private:
	time_t secondsSinceLastRun;
	int interval;
	
  public:
	Loop(int intervalInSeconds);
	void run(void (*function)(void));
};

#endif