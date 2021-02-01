#include <Arduino.h>

#define Led0 2
#define Led1 3
#define Led2 13

void setup() {
	pinMode(Led0,OUTPUT);
	pinMode(Led1,OUTPUT);
	pinMode(Led2,OUTPUT);
}

void loop() {

	digitalWrite(Led0,HIGH);
	delay(500);
	digitalWrite(Led0,LOW);
	delay(500);

	digitalWrite(Led1,HIGH);
	delay(500);
	digitalWrite(Led1,LOW);
	delay(500);

	digitalWrite(Led2,HIGH);
	delay(500);
	digitalWrite(Led2,LOW);
	delay(500);

}
