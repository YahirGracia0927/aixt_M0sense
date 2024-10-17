import pin
import adc

__global (
    val = 0
    )

pin.setup(13, output)
pin.setup(14, output)
pin.setup(15, output)
pin.setup(16, output)

for {

	val = adc.read(27)

	if val >= 0 && val < 255 {
		pin.high(13)
		pin.low(14)
		pin.low(15)
		pin.low(16)
	}

	if val >= 255 && val < 511 {
		pin.low(13)
		pin.high(14)
		pin.low(15)
		pin.low(16)
	}

	if val >= 511 && val < 767 {
		pin.low(13)
		pin.low(14)
		pin.high(15)
		pin.low(16)
	}

	if val >= 767 && val < 1023 {
		pin.low(13)
		pin.low(14)
		pin.low(15)
		pin.high(16)
	}
}
