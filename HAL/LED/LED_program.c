/*
 * DIO_Config.h
 *
 *  Created on: Aug 1, 2024
 *      Author: ZBook G3
 */


#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "LED_interface.h"
#include "LED_private.h"
#include "LED_config.h"


void LED_voidInit(LED_t* Ledobj)
{
	DIO_voidSetPinDirection(Ledobj->LED_PORT , Ledobj->LED_PIN , OUTPUT);
}
void LED_voidTurnOn(LED_t* Ledobj)
{
	DIO_voidSetPinValue(Ledobj->LED_PORT , Ledobj->LED_PIN , HIGH);
}
void LED_voidTurnOff(LED_t* Ledobj)
{
	DIO_voidSetPinValue(Ledobj->LED_PORT , Ledobj->LED_PIN , LOW);
}
