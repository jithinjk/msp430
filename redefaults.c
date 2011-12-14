#include<msp430.h>
main()
{
	P1DIR = 0x01 ;
	P1OUT = 0x01 ;
	while(1)
	{
		while(!( (P1IN >> 3) & 1))
		{
			P1OUT = 0x00 ;	
		}
		while((P1IN >> 3) & 1)
		{
			P1OUT = 0x01 ;
		}
	}
}

