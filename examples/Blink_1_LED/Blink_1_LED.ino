#include <Interval.h>  //Include the library

bool state = false;

Interval myInterval;  //Declare an interval of 1 second

void setup() {
  //Setup the LED
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  if(myInterval.isElapsed()){  //If the interval is exceeded
    //Instructions here are executed every second
    if(!state) digitalWrite(LED_BUILTIN, HIGH);
    else digitalWrite(LED_BUILTIN, LOW);
    state = !state;
  }
}
