#include <Interval.h>  //Include the library

const int LED1 = 12;
const int LED2 = 13;

bool state1 = false;
bool state2 = false;

Interval myLED1, myLED2(2000);  //Declare an interval of 1 second and an interval of 2 seconds

void setup() {
  //Setup the LED
  pinMode(LED1, OUTPUT);
  digitalWrite(LED1, LOW);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED2, LOW);
}

void loop() {
  if(myLED1.isElapsed()){  //If the interval of the first LED
    //Instructions here are executed every second
    if(!state1) digitalWrite(LED1, HIGH);
    else digitalWrite(LED1, LOW);
    state1 = !state1;
  }
  if(myLED2.isElapsed()){  //If the interval of the second LED
    //Instructions here are executed every 2 seconds
    if(!state2) digitalWrite(LED2, HIGH);
    else digitalWrite(LED2, LOW);
    state2 = !state2;
  }
}
