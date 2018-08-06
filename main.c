#include <stdlib.h>
#include <avr/io.h>



int main(void)
{

DDRB=0xFF;
PORTB=0xF0;
PORTB &= ~(1<<PB7);
PORTB |= (1<<PB0);
PORTB |= ((1<<PB0) | (1<<PB1));
PORTB ^= (1<<PB3); //Toggeln Bit


	while(1)
	{ 
		
	} //end while
}//end of main




