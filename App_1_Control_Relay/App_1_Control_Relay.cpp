#include <Arduino.h>

#define PIR 2
#define RLY 3

void setup() {
	pinMode(PIR,INPUT);
	pinMode(RLY,OUTPUT);
}

void loop() {

	if(digitalRead(PIR) == 1){
		digitalWrite(RLY,HIGH);
	}
	else{
		digitalWrite(RLY,LOW);
	}

}
