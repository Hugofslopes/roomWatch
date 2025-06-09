#include "includes/Buttons.hpp"
#include <WiFi.h>
#include "time.h"
#include "clockFont.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//conect Display vcc to 3.3 v
//cooncet grd t ogrd 

#define OLED_ADDR   0x3C
Adafruit_SSD1306 display(128, 64, &Wire, -1);

class Buttons Buttons;
# define BOUT 0
# define CHANGE 1
# define ADD 2
# define DSCL 3
# define DSDA 4



#define ssid "wifi name";
#define password "wifi password";
const long gmtOffset_sec = 19800;

int buttonPin = 5;

void setup() {

	WiFi.begin(ssid, password);
	while (WiFi.status() != WL_CONNECTED) {
		delay(500);
    dma_display->print(".");
	}

	pinMode(CHANGE, INPUT) ;
	pinMode(ADD, INPUT) ;

	display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
	display.clearDisplay();
	display.setTextColor(WHITE);
	display.setTextSize(2);
	display.setCursor(20, 20);
	display.println("SriTu Hobby");
	display.display();

	Buttons.getAdd() ?  Buttons.setAdd() : void();
	Buttons.getChange() ?  Buttons.setChange() : void();
}

void checkTime()
{
	
}
void loop() {
	/* digitalRead(ADD) == HIGH ? hour++ : void();
	digitalRead(CHANGE) == HIGH ? hour++ : void(); */
	display.drawPixel(10, 10, SSD1306_WHITE);
}
