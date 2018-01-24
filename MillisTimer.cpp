#include <Arduino.h>
#include "MillisTimer.h"

MillisTimer::MillisTimer(unsigned long firstInterval){
	_interval=firstInterval;
	_timerStatus=true;
}

MillisTimer::MillisTimer(){
	_interval=0;
	_timerStatus=true;
}

boolean MillisTimer::checkTimer(){
	unsigned long currentMillis=millis();
	if(_timerStatus){
		if((unsigned long)(currentMillis - _previousMillis )>= _interval){
			_previousMillis=currentMillis;
			return true;
		}
	}
	return false;
}

void MillisTimer::setInterval(unsigned long newInterval){
	_interval=newInterval;
}

void MillisTimer::setTimer(){
	_previousMillis=millis();
}

void MillisTimer::toggleTimer(boolean newStatus){
	_timerStatus = (newStatus = true) ? true : false;
}