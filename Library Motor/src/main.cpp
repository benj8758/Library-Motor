#include <Arduino.h>
#include <Controllino.h>
#include "Motor.h"
// put function declarations here:
Motor motor(CONTROLLINO_D0, CONTROLLINO_D1);

void setup() {
  // put your setup code here, to run once:
  pinMode(CONTROLLINO_A0, INPUT);
  pinMode(CONTROLLINO_A1, INPUT);
}

void loop() 
{
  bool s1 = digitalRead(CONTROLLINO_A0);
  bool s2 = digitalRead(CONTROLLINO_A1);

  if(s1 == s2)
  {
    motor.stop();
  }
  else
  {
    if(s1 == 1)
    {
      motor.startRechts();
    }

    if(s2 == 1)
    {
      motor.startLinks();
    }
  }
  

}


