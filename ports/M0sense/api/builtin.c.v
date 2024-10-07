// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Yahir Gracia
// Date: 2024
// License: MIT
//
// Description: Builtin definitions (M0sense port)
module main



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

fn C.init()

