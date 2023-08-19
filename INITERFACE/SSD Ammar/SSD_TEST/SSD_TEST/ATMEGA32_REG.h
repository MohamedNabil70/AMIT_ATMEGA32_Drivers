/*
 * ATMEGA32_REG.h
 *
 * Created: 9/6/2022 12:23:11 PM
 *  Author: 
 */ 


#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_
 /* DIO REGISTERS*/
 
 /* DATA DIRCTION REGISTERS */
 #define DDRA           (*(volatile u8*)0x3A)
 #define DDRB           (*(volatile u8*)0x37)
 #define DDRC           (*(volatile u8*)0x34)
 #define DDRD           (*(volatile u8*)0x31)

 /* OUTPUT REGISTERS */
 #define PORTA          (*(volatile u8*)0x3B)
 #define PORTB          (*(volatile u8*)0x38)
 #define PORTC          (*(volatile u8*)0x35)
 #define PORTD          (*(volatile u8*)0x32)

 /* INPUT REGISTERS */
 #define PINA           (*(volatile u8*)0x39)
 #define PINB           (*(volatile u8*)0x36)
 #define PINC           (*(volatile u8*)0x33)
 #define PIND           (*(volatile u8*)0x30)

 
 /* EXTERNAL INTERRUPT REGISTERS */

 // MCU Control Register
 #define MCUCR          (*(volatile u8*)0x55)

 // MCU Control and Status Register
 #define MCUCSR         (*(volatile u8*)0x54)

 // General Interrupt Control Register
 #define GICR           (*(volatile u8*)0x5B)

 // General Interrupt Flag Register
 #define GIFR           (*(volatile u8*)0x5A)

 // Status Register
 #define SREG           (*(volatile u8*)0x5F)

#endif /* ATMEGA32_REG_H_ */