#ifndef MillisTimer_h
#define MillisTimer_h

#include <Arduino.h>

class MillisTimer {
	public:
		MillisTimer(int firstInterval);
		MillisTimer();
		boolean checkTimer();
		void setInterval(int newInterval);
		void setTimer();
		int interval;
		unsigned long previousMillis;

};

#endif