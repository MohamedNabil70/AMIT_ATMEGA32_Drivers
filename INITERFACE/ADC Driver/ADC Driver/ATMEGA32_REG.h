/*
 * ATMEGA32_REG.h
 *
 * Created: 9/6/2022 11:37:21 AM
 *  Author: Mohamed Nabil
 */ 


#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_

					
						/*  DIO REGISTERS  */

//PORT_A_REGISTERS
#define PORTA (*(volatile u8*)0x3B) //output reg
#define DDRA  (*(volatile u8*)0x3A) //direction reg
#define PINA  (*(volatile u8*)0x39) //input reg
//PORT_B_REGISTERS
#define PORTB (*(volatile u8*)0x38)
#define DDRB  (*(volatile u8*)0x37)
#define PINB  (*(volatile u8*)0x36)
//PORT_C_REGISTERS
#define PORTC (*(volatile u8*)0x35)
#define DDRC  (*(volatile u8*)0x34)
#define PINC  (*(volatile u8*)0x33)
//PORT_D_REGISTERS
#define PORTD (*(volatile u8*)0x32)
#define DDRD  (*(volatile u8*)0x31)
#define PIND  (*(volatile u8*)0x30)

/******************************************************************************************/

						/*  EXTERNAL INTERRUPT REGISTERS  */

#define MCUCR (*(volatile u8*)0x55) //MCU CONTROL Reg

#define MCUCSR (*(volatile u8*)0x54) //MCU CONTROL & STATUS Reg

#define GICR (*(volatile u8*)0x5B) //GENERAL INTERRUPT CONTROL Reg

#define GIFR (*(volatile u8*)0x5A) //GENERAL INTERRUPT FLAG Reg

#define SREG  (*(volatile u8*)0x5F) //STATUS Reg
  
/******************************************************************************************/

							/*  ADC REGISTERS  */

//ADC Multiplexer Selection Register
#define ADMUX	 (*(volatile u8*)0x27)

//ADC Control and Status Register A 
#define ADCSRA	 (*(volatile u8*)0x26)

//The ADC Data Registers
#define ADCH	 (*(volatile u8*)0x25)
#define ADCL	 (*(volatile u8*)0x24)          
#define ADC_u16	 (*(volatile u16*)0x24)

//Special FunctionIO Register 
#define SFIOR	 (*(volatile u8*)0x50)

/******************************************************************************************/


#endif /* ATMEGA32_REG_H_ */