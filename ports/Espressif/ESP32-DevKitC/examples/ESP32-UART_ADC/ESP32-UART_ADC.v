// Project Name: UART ADC
// Author: Fernando M. Santa
// Date: 21/09/2024
// ESP32-DevKitC board


import time
import uart
import adc

uart.setup(9600)

for {
	analog := adc.read(a0)
	uart.println('ADC channel 0: ${analog}')
	time.sleep_ms(1000)
}
