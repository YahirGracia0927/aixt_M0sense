import uart

uart.setup(9600)

for {
	if uart.any() {
		a := uart.read()
		uart.println(a)
	}
}