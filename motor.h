#ifndef INCFILE1_H_
#define INCFILE1_H_

#include "std_types.h"
#include "Macro.h"
#include "DIO.h"

#define MOTORA_IN1_PIN				26
#define MOTORA_IN2_PIN				27
#define MOTORA_ENABLE               28
#define MOTORB_ENABLE               29
#define MOTORB_IN1_PIN				30
#define MOTORB_IN2_PIN				31

void motor_Init(void);
void motor_forward(void);
void motor_backward(void);
void motor_Right(void);
void motor_left(void);
void motor_stop(void);



#endif /* INCFILE1_H_ */