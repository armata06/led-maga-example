#ifndef LED_H
#define LED_H
#include <Arduino.h>
class LED{
  private:
    int pin;
    int state;
    long oldTime;
    long period;
  public:
    LED(int, long);
    void initialize();
    void changeState();
    void checkTime();
};


#endif


