#include <Arduino.h>

#define Led 9
#define Pot A0

void setup() {
	pinMode(Led,OUTPUT);
}

void loop() {

	uint16_t potval;
	potval = analogRead(Pot); // Rentang nilai 0 -1023

	uint8_t brightness;
	brightness = map(potval,0,1023,0,255);

	analogWrite(Led,brightness);
}
