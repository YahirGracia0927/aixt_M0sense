// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Yahir Gracia
// Date: 2024
// License: MIT
//
// Description: Builtin definitions (M0sense port)

#include <bflb_platform.h>
#include <hal_gpio.h>
#include "hal_dac.h"
#include "hal_dma.h"
#include "hal_uart.h"
#include "hal_pwm.h"
#include "hal_clock.h"

/* USB STDIO */
#include <usb_stdio.h>
#include "io_def.h"
#include "builtin.c"

module main

enum Pin_names {

gpio0 = 0    
    gpio1
    gpio2
    gpio3
    gpio4
    gpio5
    gpio6
    gpio7
    gpio8
    gpio9
    gpio10
    gpio11
    gpio12
    gpio13
    gpio14
    gpio15
    gpio16
    gpio17
    gpio18
    gpio19
    gpio20
    gpio21
    gpio22
    gpio23
    gpio24
    gpio25
    gpio26
    gpio27
    gpio28
  
}

enum Builtin_names {
	LED_B_PIN = 23
}

enum Pin_modes {
	input = 4
	output = 1
	in_pullup
}

enum ADC_pin_names {
	gpio = 27
	
}