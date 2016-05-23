#ifndef MillisTimer_h
#define MillisTimer_h

#include <Arduino.h>

class MillisTimer {
	public:
		MillisTimer(unsigned long firstInterval);
		MillisTimer();
		boolean checkTimer();
		void setInterval(unsigned long newInterval);
		void setTimer();
		unsigned long interval;
		unsigned long previousMillis;

};

#endif