#include "remote.h"

//÷ÿ∂®œÚ
int fputc(int ch, FILE *f)
{
  HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, 0xffff);
  return ch;
}
 
int fgetc(FILE *f)
{
  uint8_t ch = 0;
  HAL_UART_Receive(&huart1, &ch, 1, 0xffff);
  return ch;
}


int get_valuey(void)
{
	HAL_ADC_Start(&hadc1);
	HAL_ADC_PollForConversion(&hadc1,HAL_MAX_DELAY);
	
	return HAL_ADC_GetValue(&hadc1);
}

int get_valuex(void)
{
	HAL_ADC_Start(&hadc2);
	HAL_ADC_PollForConversion(&hadc2,HAL_MAX_DELAY);
	
	return HAL_ADC_GetValue(&hadc2);
}


