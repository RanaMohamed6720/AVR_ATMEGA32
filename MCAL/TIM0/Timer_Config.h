/*
 * Timer_Config.h
 *
 *  Created on: Aug 12, 2024
 *      Author: ZBook G3
 */

#ifndef MCAL_TIMERS_TIMERS_CONFIG_H_
#define MCAL_TIMERS_TIMERS_CONFIG_H_

/*USER select his options*/
#define TIMER0_MODE				TIMER0_FASTPWM_MODE

#define TIMER0_OC0_MODE			TIMER_OC_NON_INVERTING

#define TIMER0_PRESCALER		TIMER_SCALER_8

#define TIMER0_INITIAL_VALUE	0

#define TIMER0_OCR0_VALUE		127


/*USER select his options*/
#define TIMER1_MODE				TIMER1_CTC_MODE_OCRA_IS_TOP

#define TIMER1_OC1A_MODE		TIMER_OC_NON_INVERTING

#define TIMER1_OC1B_MODE		TIMER_OC_DISCONNECTED

#define TIMER1_PRESCALER		TIMER_SCALER_8

#define TIMER1_INITIAL_VALUE	0


#define TIMER1_OCR1A_VALUE		48576

#define TIMER1_OCR1B_VALUE		0

#define TIMER1_ICR_VALUE		19999



// Timer2 Mode
#define TIMER2_MODE 					TIMER2_NORMAL_MODE
#define TIMER2_OC2_MODE					 TIMER_OC_DISCONNECTED
#define TIMER2_INITIAL_VALUE					 0
#define TIMER2_OCR2_VALUE 						0
#define TIMER2_PRESCALER 				TIMER2_SCALER_64
#endif /* MCAL_TIMERS_TIMERS_CONFIG_H_ */
