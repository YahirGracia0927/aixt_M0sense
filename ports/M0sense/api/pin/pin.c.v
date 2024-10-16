// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module pin

#include <bflb_platform.h>
#include <hal_gpio.h>
#include <usb_stdio.h>
#include "io_def.h"

const output = int(1)
const input = int(4)