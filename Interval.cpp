#include "Arduino.h"
#include "Interval.h"

unsigned int timer = 0;
unsigned int previous = 0;
unsigned int actual = 0;

Interval::Interval() : timer(1000)
{
}

Interval::Interval(unsigned int interval) : timer(interval)
{
}

void Interval::updateTimer(){
  actual = millis();
}

bool Interval::isElapsed(){
  actual = millis();
  if(actual - previous >= timer) {
    previous = actual;
    return true;
  }
  else return false;
}

unsigned int Interval::beforeElapsed(){
  actual = millis();
  return (timer-actual+previous);
}
