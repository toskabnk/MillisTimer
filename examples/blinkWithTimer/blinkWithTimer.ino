#include <MillisTimer.h>

MillisTimer timer(1000); //Creamos un timer a 1s (1000ms)
int ledState=LOW;

void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  timer.setTimer(); //Inicializamos previousMillis
}

void loop() {
//Comprobamos si ha pasado el intervalo, devuelve true en caso afirmativo.
if(timer.checkTimer()){
  if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  //timer.setTimer //Recomiendo usar esto si tu accion al pasar el tiempo tiene muchas instrucciones
}

digitalWrite(13,ledState);
}
