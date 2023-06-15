/*
 * main.c
 *
 * Created: 30/05/2023 4:42:25 PM
 *  Author: Rajeshri
 */ 

#include <xc.h>

void ADC_Init();
int ADC_Conversion(void);

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
int ADC_Conversion(void)
{
 int data;
 ADCSRA |=(1<<6);                             //Start Conversion
 while((ADCSRA&(1<<6))!=0);                   //Waiting for conversion to complete
 data=ADCL;
 data+=(ADCH<<8);                             // Receive Converted Data
 return data;
}
