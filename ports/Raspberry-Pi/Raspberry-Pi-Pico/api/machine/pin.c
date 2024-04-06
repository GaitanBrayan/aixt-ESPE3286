#define pin_setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)

#define pin_high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)

#define pin_low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)

#define out OUTPUT

#define in INPUT_PULLUP

<<<<<<< HEAD
#define adc_write(PIN_NAME, MODE)   analogWrite(PIN_NAME, MODE)

#define uart0_setup(baud_rate)   Serial.begin(baud_rate).,
#define uart_setup(baud_rate)   Serial.begin(baud_rate)

#define uart0_ready()  Serial.available()
#define uart_ready()   Serial.available()

#define uart0_read()   Serial.read()
#define uart_read()   Serial.read()

#define println(message)   Serial.println(message)
=======
#define pin_read(PIN_NAME)   digitalRead(PIN_NAME)
>>>>>>> 2d8f797db8c3c5c757c2f3c7abe22d9bbd8f42fb
