#include "includes/Buttons.hpp"

class Buttons Buttons;
# define CHANGE 10
# define ADD 2
int buttonPin = 5;


void setup() {
	pinMode(CHANGE, INPUT) ;
	pinMode(ADD, INPUT) ;
	Buttons.getAdd() ?  Buttons.setAdd() : void();
	Buttons.getChange() ?  Buttons.setChange() : void();
}

void checkTime()
{
	
}
void loop() {
	digitalRead(ADD) == HIGH ? hour++ : void();
	digitalRead(CHANGE) == HIGH ? hour++ : void();
}
