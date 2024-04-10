module pwm


fn setup(output u8, freq u16) 
	if output == 1 {
		TRISCbits.TRISC2 = 0
		CCPR1L = 0
		CCP1CON = 0x0C
	} else if output == 2 {
		TRISCbits.TRISC1 = 0
		CCPR2L = 0
		CCP2CON = 0x0C
	} else {
		TRISCbits.TRISC2 = 0
		CCPR1L = 0
		TRISCbits.TRISC1 = 0
		CCPR2L = 0
		CCP1CON = 0x0C
		CCP2CON = 0x0C
	}