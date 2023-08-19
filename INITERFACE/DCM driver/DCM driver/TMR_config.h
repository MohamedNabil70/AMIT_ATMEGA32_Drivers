/*
 * TMR_config.h
 *
 * Created: 9/25/2022 5:56:33 AM
 *  Author: Mohamed Nabil 
 */ 


#ifndef TMR_CONFIG_H_
#define TMR_CONFIG_H_

//NORMAL MODE Values
#define TMR_TMR0_PRELOAD_VALUE		112
#define TMR_TMR0_OVF_COUNTER		977

//CTC MODE Values

//set to number of desired ms 
#define TMR_TMR0_CTC_COUNTER		965 



/*
	[Timer Mode] 
Options for Timer 0 mode:
1- TMR_TMR0_NORMAL_MODE  
2- TMR_TMR0_CTC_MODE
3- TMR_TMR0_FAST_PWM_MODE	  
*/

#define TMR_TMR0_MODE	TMR_TMR0_FAST_PWM_MODE




#endif /* TMR_CONFIG_H_ */