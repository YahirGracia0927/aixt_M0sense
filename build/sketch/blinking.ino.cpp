#include <Arduino.h>
#line 1 "/home/fercho/aixt/ports/Raspberry-Pi/Raspberry-Pi-Pico/examples/blinking/blinking.ino"
// This Arduino code was automatically generated by Aixt Project
// Device = Raspberry-Pi-Pico
// Board = Raspberry Pi Pico
// Backend = arduino

enum main__Pin_names {
	gp0 = 0,
	gp1,
	gp2,
	gp3,
	gp4,
	gp5,
	gp6,
	gp7,
	gp8,
	gp9,
	gp10,
	gp11,
	gp12,
	gp13,
	gp14,
	gp15,
	gp16,
	gp17,
	gp18,
	gp19,
	gp20,
	gp21,
	gp22,
	gp23,
	gp24,
	gp25,
	gp26,
	gp27,
	gp28,
	gp29,
};
enum main__Builtin_names {
	led0 = 25,
};
enum main__Pin_modes {
	input = 0,
	output,
	in_pullup,
};
enum main__ADC_pin_names {
	a0 = 14,
	a1,
	a2,
	a3,
	a4,
	a5,
	a6,
	a7,
};

#define time__sleep_ms(tms) delay(tms)

#define time__sleep(ts) delay(ts * 1000)

#define time__sleep_us(tus) delayMicroseconds(tus)

#define pin__read(name)  digitalRead(name)

#define pin__high(name) digitalWrite(name, HIGH)

#define pin__setup(name, mode) pinMode(name, mode)

#define pin__low(name) digitalWrite(name, LOW)

#define pin__write(name, val) digitalWrite(name, val)

#line 73 "/home/fercho/aixt/ports/Raspberry-Pi/Raspberry-Pi-Pico/examples/blinking/blinking.ino"
void setup();
#line 83 "/home/fercho/aixt/ports/Raspberry-Pi/Raspberry-Pi-Pico/examples/blinking/blinking.ino"
void loop();
#line 73 "/home/fercho/aixt/ports/Raspberry-Pi/Raspberry-Pi-Pico/examples/blinking/blinking.ino"
void setup() {
	pin__setup(led0, output); 
	while(true) {
		pin__high(led0);
		time__sleep_ms(500);
		pin__low(led0);
		time__sleep_ms(500);
	} 
}

void loop(){}


