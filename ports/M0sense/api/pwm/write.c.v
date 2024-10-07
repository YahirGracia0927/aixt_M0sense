// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module pin

// write puts a logic value to a specific pin
@[inline]
pub fn write(name int, val int) {  
    C. gpio_write(name, val)
}