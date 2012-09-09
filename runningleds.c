#include<msp430.h>
void delay()
{
	int i;
	for(i=0;i<20000;++i) ;
}
main()	//redgrn blink.
{
	P1DIR = 15;
	while(1)
	{
	P1OUT ^= 0x40;
	delay();
	P1OUT ^= 0x01;
	}
}
