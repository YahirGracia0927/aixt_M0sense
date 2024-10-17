// Project Name: Blinking
// Author: Fernando M. Santa
// Date: 08/09/2024
// Arduino-Nano board

import time
import pin

pin.setup(led_g, output)

for {
	pin.high(led_g)
	time.sleep_ms(500)
	pin.low(led_g)
	time.sleep_ms(500)
}

