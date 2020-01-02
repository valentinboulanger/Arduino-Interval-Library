# The Interval Library
A small Arduino library that allows you to perform asynchronous actions on Arduino boards.
# How to install
To install this library on your Arduino IDE, you should follow the steps below :
* Download this library in a .ZIP file
* In your Arduino IDE, click on `Sketch > Include Library > Add .ZIP Library...`
* Select the downloaded .ZIP file
* The library is installed !

# Usage
## Examples
To begin, you can view the pre-recorded examples in `File > Examples > Arduino-Interval-Library`.
## Include
To use this library, you must have at the first line : ```#include <Interval.h>```.
## Definition
You can add a new Interval object by this code : ```Interval myInterval(DURATION_IN_MS);```
You can also use the default writing to use a 1000 ms interval : ```Interval myInterval;```
## Function isElapsed()
The `isElapsed()` function returns a boolean which is true if the interval has been elapsed and false otherwise. 
If this function is used in the `loop()`, all instructions inside will be executed every interval time defined.
```
#include <Interval.h>
Interval myInterval(2000);

void setup(){
}

void loop(){
  if(myInterval.isElapsed()){
    //Intructions here will be executed every 2000 ms
  }
}
```
## Function beforeElapsed()
The `beforeElapsed()` function returns an integer which corresponds to the number of milliseconds remaining before exceeding the interval.
```
#include <Interval.h>
Interval myInterval(2000);

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println(myInterval.beforeElapsed());
  if(myInterval.isElapsed()){
    //Intructions here will be executed every 2000 ms
  }
}
```
## Function addToInterval()
The `addToInterval()` function allows you to add or remove a duration from an interval.
```
#include <Interval.h>
Interval myInterval(2000);

void setup(){
  Serial.begin(9600);
}

void loop(){
  if(myInterval.isElapsed()){
    //Intructions here will be executed every 2000 ms
    myInterval.addToInterval(-500);
  }
}
```
## Function setInterval()
The `setInterval()` function allows you to redefine an interval.
```
#include <Interval.h>
Interval myInterval(2000);

void setup(){
  Serial.begin(9600);
  myInterval.setInterval(3000);
}

void loop(){
  if(myInterval.isElapsed()){
    //Intructions here will be executed every 2000 ms
    myInterval.addToInterval(-500);
  }
}
```
## Function value()
The `value()` function returns the defined interval.
```
#include <Interval.h>
Interval myInterval(2000);

void setup(){
  Serial.begin(9600);
  myInterval.value(); //It returns 2000
}

void loop(){
}
```
# To finish
If you have other ideas for this library, please [indicate them here](https://github.com/valentinboulanger/Arduino-Interval-Library/issues). Thanks !
