#ifndef __KEY__H_
#define __KEY__H_
#include "sys.h"

#define KEY0 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4)
#define KEY1 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_3)
#define KEY2 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_2)
#define WK_UP GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)

#define KEY0_PRES 1
#define KEY1_PRES 2
#define KEY2_PRES 3
#define WK_UP_PRES 4
#define KEY_NO_PRES 0


void KEY_Init(void);
u8 KEY_Scan(u8 mode);


#endif






