#include <MillisTimer.h>

MillisTimer timer(1000);
int ledState=LOW;

void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  timer.setTimer();
}


void loop() {
if(timer.checkTimer()){
  if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  
  
}

digitalWrite(13,ledState);
}
