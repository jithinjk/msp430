#include<msp430.h>
void delay()
{
	int i ;
	for(i=0;i<30000;++i) ;
}
main()	//4leds blink.
{
	P1DIR = 0x0f;
	P1OUT = 0x01;
	while(1)
	{
		delay();
		P1OUT<<=1;
		if(P1OUT==0x08)
			P1OUT=0x01;
	}
}
