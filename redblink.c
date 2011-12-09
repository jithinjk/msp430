#include<msp430.h>
void delay()
{
	int i;
	for(i=0;i<20000;++i) ;
}
main()	//red blink.
{
	P1DIR = 0x1;
	while(1)
	{
	P1OUT ^= 0x01;
	delay();
	P1OUT ^= 0x00;
	}
}
