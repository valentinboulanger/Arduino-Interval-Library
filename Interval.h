/*
  Interval.h - Library for asynchronous actions.
  Created by Valentin B., December 30, 2019.
  Released into the public domain.
*/
#ifndef Interval_h
#define Interval_h

#include "Arduino.h"
class Interval
{
  public:
    Interval();
    Interval(unsigned int interval);
    void updateTimer();
    bool isElapsed();
    unsigned int beforeElapsed();

  private:
    unsigned int actual;
    unsigned int previous;
    unsigned int timer;
};

#endif
