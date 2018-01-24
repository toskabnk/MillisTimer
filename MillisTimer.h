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
		void toggleTimer(boolean newStatus);
	
	private:
		unsigned long _interval;
		unsigned long _previousMillis;
		boolean _timerStatus;
	
};

#endif