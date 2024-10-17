// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module pin

// pin_high puts a low value (logic 0) to a specific pin
@[inline]
pub fn low(name int) {   
    C. gpio_write(name, 0)
}