// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module pin

// setup configures a pin's input/output mode
@[inline]
pub fn setup(name int, mode int) {   
    C.gpio_set_mode(name, mode)
}