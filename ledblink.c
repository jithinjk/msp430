#include <msp430.h>
#define LED1 BIT0
#define TOGGLE_LED1 (P1OUT ^= LED1)
void delay()
{
<<<<<<< HEAD
unsigned int i = 0;
while(++i < 30000);
=======
	unsigned int i = 0;
	while(++i < 30000);
>>>>>>> ff042a2a6e07e2044d5027c254f6088cbe07bf6d
}
main()
{
	P1OUT = 0;
	P1DIR = 1;
<<<<<<< HEAD
	while(1) {
	TOGGLE_LED1;
	delay();
}
=======
	while(1) 
	{
		TOGGLE_LED1;
		delay();
	}
>>>>>>> ff042a2a6e07e2044d5027c254f6088cbe07bf6d
}
