#include "Motor.h"
#include <Arduino.h>




Motor::Motor(uint8_t rechts, uint8_t links)
{
    pinLinks = links;
    pinRechts = rechts;
    pinMode(pinLinks, OUTPUT);
    pinMode(pinRechts, OUTPUT);
}

Motor::~Motor()
{
}
void Motor::stop()
{
    digitalWrite(pinLinks, 0);
    digitalWrite(pinRechts, 0);
}
void Motor::start(bool direction)
{
    if(direction == 0)
    {
        startLinks();
    }
    else
    {
       startRechts();
    }
}
void Motor::startLinks()
{
    digitalWrite(pinRechts, 0); 
    delay(100);   
    digitalWrite(pinLinks, 1);
}
void Motor::startRechts()
{
    digitalWrite(pinLinks, 0);
    delay(100);
    digitalWrite(pinRechts, 1);
}