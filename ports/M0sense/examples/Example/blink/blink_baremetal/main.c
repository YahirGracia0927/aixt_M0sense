// This C code was automatically generated by Aixt Project
// Device = M0sense
// Board = Sipeed M0sense
// Backend = c

#include <bflb_platform.h>
#include <hal_gpio.h>
#include <hal_dac.h>
#include <hal_dma.h>
#include <hal_uart.h>
#include <hal_pwm.h>
#include <hal_clock.h>
#include <usb_stdio.h>
#include <io_def.h>

void  time__sleep(int32_t ts);
void  time__sleep_ms(int32_t tms);
void  pin__setup(int32_t name, int32_t mode);
int32_t  pin__read(int32_t name);
void  pin__write(int32_t name, int32_t val);
void  pin__low(int32_t name);
void  pin__high(int32_t name);

enum main__Pin_names {
	gpio0 = 0,
	gpio1,
	gpio2,
	gpio3,
	gpio4,
	gpio5,
	gpio6,
	gpio7,
	gpio8,
	gpio9,
	gpio10,
	gpio11,
	gpio12,
	gpio13,
	gpio14,
	gpio15,
	gpio16,
	gpio17,
	gpio18,
	gpio19,
	gpio20,
	gpio21,
	gpio22,
	gpio23,
	gpio24,
	gpio25,
	gpio26,
	gpio27,
	gpio28,
};
enum main__Builtin_names {
	led_b = 23,
	led_g,
	led_r,
};
enum main__Pin_modes {
	input = 4,
	output = 1,
	in_pullup,
};
enum main__ADC_pin_names {
	gpio = 27,
};

inline void  time__sleep(int32_t ts) {
	dmtimer_delay_ms(ts * 1000); 
}

inline void  time__sleep_ms(int32_t tms) {
	mtimer_delay_ms(tms); 
}

const int32_t _const_pin__output = (int32_t)(1);
const int32_t _const_pin__input = (int32_t)(4);

inline void  pin__setup(int32_t name, int32_t mode) {
	gpio_set_mode(name, mode); 
}

inline int32_t  pin__read(int32_t name) {
	return gpio_read(name); 
}

inline void  pin__write(int32_t name, int32_t val) {
	gpio_write(name, val); 
}

inline void  pin__low(int32_t name) {
	gpio_write(name, 0); 
}

inline void  pin__high(int32_t name) {
	gpio_write(name, 1); 
}

int main() {
	pin__setup(led_g, output); 
	while( true ) {
		pin__high(led_g); 
		time__sleep_ms(500); 
		pin__low(led_g); 
		time__sleep_ms(500); 
	} 
	return 0;
}


