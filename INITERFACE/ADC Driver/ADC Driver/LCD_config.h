/*
 * LCD_config.h
 *
 * Created: 9/11/2022 11:33:42 AM
 *  Author: Mohamed Nabil
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


						/*Macros For Control Pins Configuration*/

//Macros For Rs Pin
#define LCD_RS_PORT		DIO_PORTB	
#define LCD_RS_PIN		DIO_PIN1

//Macros For Rw Pin
#define LCD_RW_PORT		DIO_PORTB
#define LCD_RW_PIN		DIO_PIN2

//Macros For Enable Pin
#define LCD_E_PORT		DIO_PORTB
#define LCD_E_PIN		DIO_PIN3

						/*Macros For DATA Pins Configuration*/
/*
Options For LCD Mode:
 LCD_8_BIT_MODE
 LCD_4_BIT_MODE     */
 
#define LCD_MODE	 LCD_4_BIT_MODE

/*Macros For 8 bit mode Configuration*/
#if LCD_MODE == LCD_8_BIT_MODE
//FULL PORT CONTROL
#define LCD_DATA_PORT		DIO_PORTA

//EACH PIN CONTROL
#define LCD_D0_PORT		DIO_PORTA
#define LCD_D0_PIN		DIO_PIN0

#define LCD_D1_PORT		DIO_PORTA
#define LCD_D1_PIN		DIO_PIN1

#define LCD_D2_PORT		DIO_PORTA
#define LCD_D2_PIN		DIO_PIN2

#define LCD_D3_PORT		DIO_PORTA
#define LCD_D3_PIN		DIO_PIN3

#define LCD_D4_PORT		DIO_PORTA
#define LCD_D4_PIN		DIO_PIN4

#define LCD_D5_PORT		DIO_PORTA
#define LCD_D5_PIN		DIO_PIN5

#define LCD_D6_PORT		DIO_PORTA
#define LCD_D6_PIN		DIO_PIN6

#define LCD_D7_PORT		DIO_PORTA
#define LCD_D7_PIN		DIO_PIN7


/*Macros For 4 bit mode Configuration*/
#elif LCD_MODE == LCD_4_BIT_MODE

#define LCD_D4_PORT		DIO_PORTA
#define LCD_D4_PIN		DIO_PIN4

#define LCD_D5_PORT		DIO_PORTA
#define LCD_D5_PIN		DIO_PIN5

#define LCD_D6_PORT		DIO_PORTA
#define LCD_D6_PIN		DIO_PIN6

#define LCD_D7_PORT		DIO_PORTA
#define LCD_D7_PIN		DIO_PIN7

#endif




#endif /* LCD_CONFIG_H_ */