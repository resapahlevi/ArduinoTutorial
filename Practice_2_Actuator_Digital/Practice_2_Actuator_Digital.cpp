#include <Arduino.h>

#define RLY 3

void setup() {
	/*
	 * konfigurasi pin, protokol, variabel
	 */
	pinMode(RLY,OUTPUT);
}

void loop() {
	/*
	 * Perulangan kode
	 */
	digitalWrite(RLY,HIGH);
	delay(500);				// berhenti sejenak selama 500 ms
	digitalWrite(RLY,LOW);
	delay(500);
}
