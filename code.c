/*
 * main.c
 *
 * Created: 30/05/2023 4:42:25 PM
 *  Author: Rajeshri
 */ 

#include <xc.h>

void ADC_Init();

int main(void)
{
	ADC_Init();
    while(1)
    {
        //TODO:: Please write your application code 
    }
}

void ADC_Init()
{
	ADMUX=0;
	ADCSRA=0x80;
}
