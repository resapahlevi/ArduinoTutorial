#include <Arduino.h>

void setup() {
	/*
	 * Konfigurasi pin, protokol, variabel
	 */

	/*
	 * Memilih nomor pin
	 * 		pin tersebut dapat mengakomodasi task
	 * 			data digital -> pin digital
	 * 			data analog -> pin analog
	 * Menentukan mode untuk pin tersebut
	 * 		INPUT			-> masukan
	 * 		OUTPUT			-> luaran
	 * 		INPUT_PULLUP	-> masukan , aktif HIGH
	 */

	/*
	 * pinMode(inst1, inst2)
	 * 		inst1 -> nomor pin Arduino
	 * 		inst2 -> mode pin
	 */

	pinMode(2, INPUT);
	pinMode(3, INPUT);

	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
}

void loop() {

}
