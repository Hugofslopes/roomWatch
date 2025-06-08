#include <Arduino.h>
#line 1 "/home/hugo-lopes/arduino/watch/watch/watch.ino"
#include "includes/Buttons.hpp"

class Buttons Buttons;


#line 6 "/home/hugo-lopes/arduino/watch/watch/watch.ino"
void setup();
#line 13 "/home/hugo-lopes/arduino/watch/watch/watch.ino"
void checkTime();
#line 17 "/home/hugo-lopes/arduino/watch/watch/watch.ino"
void loop();
#line 6 "/home/hugo-lopes/arduino/watch/watch/watch.ino"
void setup() {
	pinMode(12, INPUT) ;
	pinMode(10, INPUT) ;
	Buttons.getAdd() ?  Buttons.setAdd() : void();
	Buttons.getChange() ?  Buttons.setChange() : void();
}

void checkTime()
{
	
}
void loop() {

}

