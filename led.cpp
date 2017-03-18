#include "led.h"

LED::LED(int pin, long period){
      this->pin = pin;
      this->period = period;
      this->state = LOW;
      this->oldTime = 0;
    }

void LED::changeState(){
  if (state == LOW){
    digitalWrite(pin, HIGH);
    state = HIGH;
  } else {
    digitalWrite(pin, LOW);
    state = LOW;
  }
}

void LED::initialize(){
  pinMode(pin,OUTPUT);
}

void LED::checkTime(){
  if (millis() - oldTime > period){
    changeState();
    oldTime = millis();
  }
}

