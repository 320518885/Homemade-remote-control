#ifndef __REMOTE_H_
#define __REMOTE_H_


#include "main.h"
#include "adc.h"
#include "usart.h"
#include "stdio.h"

int fputc(int ch, FILE *f);
int fgetc(FILE *f);
int get_valuey(void);
int get_valuex(void);


#endif
