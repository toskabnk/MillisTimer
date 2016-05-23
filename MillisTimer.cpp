#include <Arduino.h>
#include "MillisTimer.h"

MillisTimer::MillisTimer(unsigned long firstInterval){
 interval=firstInterval;
}

MillisTimer::MillisTimer(){
 interval=0;
}

boolean MillisTimer::checkTimer(){
unsigned long currentMillis=millis();
  if(currentMillis - previousMillis >= interval){
    previousMillis=currentMillis;
	return true;
	
  }
  return false;
}

void MillisTimer::setInterval(unsigned long newInterval){
 interval=newInterval;
}

void MillisTimer::setTimer(){
 previousMillis=millis();
}