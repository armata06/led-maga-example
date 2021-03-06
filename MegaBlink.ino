/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
#include "led.h"
 
LED led1(2,500);
LED led2(3,1000);
LED led3(4,1500);

const int ledCount = 3;
LED ledArray [ledCount] = {led1,led2,led3};


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  for (int i = 0; i<ledCount; i++){
    ledArray[i].initialize();
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i<ledCount; i++){
    ledArray[i].checkTime();
  }
  
}




