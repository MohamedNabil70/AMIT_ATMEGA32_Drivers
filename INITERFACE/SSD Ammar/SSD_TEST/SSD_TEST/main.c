/*
 * SSD_TEST.c
 *
 * Created: 9/18/2022 12:37:39 PM
 * Author : NoUr MD
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
//UTILES
#include "TYPE_DEF.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

//MCAL
#include "DIO_Interface.h"

//HAL
#include "SSD_Interface.h"


int main(void)
{
	u8 counter;
	for(counter=0;counter<=60;counter++){
		SSD_DisplyNumberTwoDigits(counter);
	}
    while (1)
    {


    }
}

