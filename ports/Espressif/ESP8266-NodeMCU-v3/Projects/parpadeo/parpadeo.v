import time
import pin

for i in 0..5 {   //blinking the emulated pin x, 5 times
    pin.high(D1)
    time.sleep(1)
    pin.low(D1)
    time.sleep(1)
}