#ifndef _LED_H_
#define _LED_H_
#include "sys.h"
//LED ¶Ë¿Ú¶¨Òå
#define LED0 PFout(9) // DS0
#define LED1 PFout(10)// DS1

void LED_Init(void);

#endif

