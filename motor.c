#include "motor.h"

void motor_Init(void)
{
	// Motor A Initialization
	DIO_SetPinDirection(MOTORA_IN1_PIN,OUTPUT);
	DIO_SetPinDirection(MOTORA_IN2_PIN,OUTPUT);
	DIO_WritePin(MOTORA_IN1_PIN,LOW);
	DIO_WritePin(MOTORA_IN2_PIN,LOW);
	
	// Motor B Initialization
	DIO_SetPinDirection(MOTORB_IN1_PIN,OUTPUT);
	DIO_SetPinDirection(MOTORB_IN2_PIN,OUTPUT);
	DIO_WritePin(MOTORB_IN1_PIN,LOW);
	DIO_WritePin(MOTORB_IN2_PIN,LOW);
}

void motor_forward(void)
{
	// Motor A
	DIO_WritePin(MOTORA_IN1_PIN,HIGH);
	DIO_WritePin(MOTORA_IN2_PIN,LOW);
	// Motor B
	DIO_WritePin(MOTORB_IN1_PIN,LOW);
	DIO_WritePin(MOTORB_IN2_PIN,HIGH);
}
void motor_backward(void)
{
	// Motor A
	DIO_WritePin(MOTORA_IN1_PIN,LOW);
	DIO_WritePin(MOTORA_IN2_PIN,HIGH);
	// Motor B
	DIO_WritePin(MOTORB_IN1_PIN,HIGH);
	DIO_WritePin(MOTORB_IN2_PIN,LOW);
}
void motor_Right(void)
{
	// Motor A
	DIO_WritePin(MOTORA_IN1_PIN,LOW);
	DIO_WritePin(MOTORA_IN2_PIN,HIGH);
	// Motor B
	DIO_WritePin(MOTORB_IN1_PIN,LOW);
	DIO_WritePin(MOTORB_IN2_PIN,HIGH);
}
void motor_left(void)
{
	// Motor A
	DIO_WritePin(MOTORA_IN1_PIN,HIGH);
	DIO_WritePin(MOTORA_IN2_PIN,LOW);
	// Motor B
	DIO_WritePin(MOTORB_IN1_PIN,HIGH);
	DIO_WritePin(MOTORB_IN2_PIN,LOW);
}
void motor_stop(void)
{
	// Motor A
	DIO_WritePin(MOTORA_IN1_PIN,LOW);
	DIO_WritePin(MOTORA_IN2_PIN,LOW);
	// Motor B
	DIO_WritePin(MOTORB_IN1_PIN,LOW);
	DIO_WritePin(MOTORB_IN2_PIN,LOW);
}
