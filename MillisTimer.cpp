#include <Arduino.h>
#include "MillisTimer.h"

MillisTimer::MillisTimer(int firstInterval){
 interval=firstInterval;
}

MillisTimer::MillisTimer(){
 interval=0;
}

boolean MillisTimer::checkTimer(){
boolean res=false;
unsigned long currentMillis=millis();
  if(currentMillis - previousMillis >= interval){
    res=true;
    previousMillis=currentMillis;
  }
  return res;
}

void MillisTimer::setInterval(int newInterval){
interval=newInterval;
}

void MillisTimer::setTimer(){
previousMillis=millis();
}