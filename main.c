/*
 * WIFI.c
 *
 * Created: 9/28/2019 4:46:39 PM
 * Author : Taha
 */ 

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include "uart_driver.h"
#include "ESP_Driver.h"
#include "DIO.h"
#include "Macro.h"

/***************** WIFI Configuration ************************/
#define PASSWORD "123456789"
#define SSID     "Taha"
#define PORT     "1234"

int main(void)
{
    Disable_Interrupts();
    /*Initialize UART with 9600 BaudRate*/
    UART_Init(9600,ESP_FillResponseBuffer);
    Enable_Interrupts();
	
    /* Configure ESP */
    WIFI_Service_Start(Server, PORT, SSID, PASSWORD, NULL, NULL, NULL, NULL);
    	
	/*check if the data sent is correct*/
    while(OK_Status!=ESP_SendData("Welcome","8"));
	
	/* Led configuration for visualization */
	DIO_SetPinDirection(PIN12,OUTPUT);
	DIO_WritePin(PIN12,1);
	
    while (1) 
    {
		/* Check for received character */
		
		/* Move Forward */
		if (UDR == 'W'){
			motor_forward();
			TOGGLE_BIT(DIO_PORTB,4);
		/* Move Backward */
		}else if(UDR == 'S'){
			motor_backward();
			CLEAR_BIT(DIO_PORTB,4);
		/* Move Left */
		}else if(UDR == 'A'){
			motor_left();
			SET_BIT(DIO_PORTB,4);
		/* Move Right */
		}else if(UDR == 'D'){
			motor_Right();
			TOGGLE_BIT(DIO_PORTB,4);
		}else{
			
		}
	}
	
	return 0;
}

