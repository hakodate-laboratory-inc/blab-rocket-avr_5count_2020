/*
 * roket.cpp
 *
 * Created: 2020/07/07 17:55:07
 * Author : kesno
 */ 

#include <avr/io.h>
#define F_CPU	   8000000
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdbool.h>
#include <util/twi.h>


int main(void)
{
	DDRB=0b11111111;
	DDRC=0b11111111;
	DDRD=0b11011111;

	while (1)
	{
		while((PIND&&0b00100000)==0b00000000)
		{
			PORTC=0b00100000;
			_delay_us(1600);
			PORTC=0b00000000;
			_delay_ms(30);
		}
		
		PORTB=0b01110110;
		_delay_ms(1000);
		PORTB=0b01010011;
		_delay_ms(1000);
		PORTB=0b01100111;
		_delay_ms(1000);
		PORTB=0b01101101;
		_delay_ms(1000);
		PORTB=0b00000011;
		_delay_ms(1000);
		PORTB=0b00111111;		
		
		for (int i=0;i<=33;i++)
		{
			PORTC=0b00100000;
			_delay_us(700);
			PORTC=0b00000000;
			_delay_ms(30);
		}
	}
}

