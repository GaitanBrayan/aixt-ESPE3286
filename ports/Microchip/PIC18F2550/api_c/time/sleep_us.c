// Project Name: Aixt project, https://gitlab.com/fermarsan/aixt-project.git
// File Name: sleep_us.c
// Author: Andrés Felipe Fajardo Duarte and Fernando Martínez Santa
// Date: 2024
// License: MIT
//
// Description: Microseconds delay function
//              (PIC18F2550)

#include <xc.h>
#define sleep_us(TIME)    __delay_us(TIME)