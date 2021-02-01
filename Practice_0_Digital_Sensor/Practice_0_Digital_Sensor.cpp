#include <Arduino.h>

#define PIR 2

void setup() {
	/*
	 * konfigurasi pin, protokol, atau variabel
	 */
	pinMode(PIR,INPUT);
}

void loop() {
	/*
	 * menjalankan kode secara berulang-ulang
	 */
	uint8_t pirread =  digitalRead(PIR);

	if(pirread == 1){

	}
	else{

	}
}
