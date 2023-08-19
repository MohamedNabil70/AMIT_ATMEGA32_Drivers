/*
 * ATMEGA32_REG.h
 *
 * Created: 9/6/2022 12:23:11 PM
 *  Author:Ammar 
 */ 


#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_
// Direction
#define DDRA (*(volatile u8*)0x3A)
#define DDRB (*(volatile u8*)0x37)
#define DDRC (*(volatile u8*)0x34)
#define DDRD (*(volatile u8*)0x31)
//OUTPUTS
#define PORTA (*(volatile u8*)0x3B)
#define PORTB (*(volatile u8*)0x38)
#define PORTC (*(volatile u8*)0x35)
#define PORTD (*(volatile u8*)0x32)
//INPURS
#define PINA (*(volatile u8*)0x39)
#define PINB (*(volatile u8*)0x36)
#define PINC (*(volatile u8*)0x33)
#define PIND (*(volatile u8*)0x30)

#endif /* ATMEGA32_REG_H_ */