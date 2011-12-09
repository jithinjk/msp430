#include<msp430.h>
main()
{
	P1DIR = 0x00 ;
	while(P1IN != 0)
	{
		P1IN >> 1;
	}
	P1DIR = 0x01 ;
	P1OUT = 0x01 ;
}
