/*
 * DIO_Prog.c
 *
 *  Created on: Aug 1PIN7, 2PIN019
 *      Author: hp
 */

#include "DIO.h"
#include "DIO_Map.h"
#include "Macro.h"
#include "std_types.h"

void DIO_WritePin(uint8 PinNum,uint8 PinValue)
{
	if(PinValue==HIGH)
	{
		if((PinNum>=PIN0)&&(PinNum<=PIN7))
		{
			SET_BIT(DIO_PORTA,PinNum);
		}
		else if((PinNum>=PIN8)&&(PinNum<=PIN15))
		{
			SET_BIT(DIO_PORTB,(PinNum-PIN8));
		}
		else if((PinNum>=PIN16)&&(PinNum<=PIN23))
		{
			SET_BIT(DIO_PORTC,(PinNum-PIN16));
		}
		else if((PinNum>=PIN24)&&(PinNum<=PIN31))
		{
			SET_BIT(DIO_PORTD,(PinNum-PIN24));
		}
	}
	else if(PinValue==PIN0)
	{

		if((PinNum>=PIN0)&&(PinNum<=PIN7))
		{
			CLEAR_BIT(DIO_PORTA,PinNum);
		}
		else if((PinNum>=PIN8)&&(PinNum<=PIN15))
		{
			CLEAR_BIT(DIO_PORTB,(PinNum-PIN8));
		}
		else if((PinNum>=PIN16)&&(PinNum<=PIN23))
		{
			CLEAR_BIT(DIO_PORTC,(PinNum-PIN16));
		}
		else if((PinNum>=PIN24)&&(PinNum<=PIN31))
		{
			CLEAR_BIT(DIO_PORTD,(PinNum-PIN24));

		}
	}

}
uint8 DIO_ReadPin(uint8 PinNum)
{
	if((PinNum>=PIN0)&&(PinNum<=PIN7))
	{
		return GET_BIT(DIO_PINA,PinNum);
	}
	else if((PinNum>=PIN8)&&(PinNum<=PIN15))
	{
		return GET_BIT(DIO_PINB,(PinNum-PIN8));
	}
	else if((PinNum>=PIN16)&&(PinNum<=PIN23))
	{
		return GET_BIT(DIO_PINC,(PinNum-PIN16));
	}
	else if((PinNum>=PIN24)&&(PinNum<=PIN31))
	{
		return GET_BIT(DIO_PIND,(PinNum-PIN24));
	}
	return PIN8;
}
void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection)
{
	if(PinDirection==INPUT)
	{
		if((PinNum>=PIN0)&&(PinNum<=PIN7))
		{
			CLEAR_BIT(DIO_DDRA,PinNum);
		}
		else if((PinNum>=PIN8)&&(PinNum<=PIN15))
		{
			CLEAR_BIT(DIO_DDRB,(PinNum-PIN8));
		}
		else if((PinNum>=PIN16)&&(PinNum<=PIN23))
		{
			CLEAR_BIT(DIO_DDRC,(PinNum-PIN16));
		}
		else if((PinNum>=PIN24)&&(PinNum<=PIN31))
		{
			CLEAR_BIT(DIO_DDRD,(PinNum-PIN24));
		}
	}
	else if(PinDirection==OUTPUT)
	{
		if((PinNum>=PIN0)&&(PinNum<=PIN7))
		{
			SET_BIT(DIO_DDRA,PinNum);
		}
		else if((PinNum>=PIN8)&&(PinNum<=PIN15))
		{
			SET_BIT(DIO_DDRB,(PinNum-PIN8));
		}
		else if((PinNum>=PIN16)&&(PinNum<=PIN23))
		{
			SET_BIT(DIO_DDRC,(PinNum-PIN16));
		}
		else if((PinNum>=PIN24)&&(PinNum<=PIN31))
		{
			SET_BIT(DIO_DDRD,(PinNum-PIN24));
		}
	}


}
