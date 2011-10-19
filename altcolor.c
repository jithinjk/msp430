#include <msp430.h>
void delay()
{
	int i;
	for(i = 0;i < 20000 ; i++);
}
main()
{
	P1DIR = 0x41;
	P1OUT = 0X41;
	while(1)
	{
	P1OUT ^= 0x01;
	delay();
	P1OUT ^= 0x40;
	}
}
