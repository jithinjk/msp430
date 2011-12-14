#include<msp430.h>
main()
{
	P1DIR = 0x0041 ;
	P1OUT = 0x0001 ;
	TACTL = 0x02E0 ;
	while(1)
	{
		while(!(TACTL & 1)) ;
		TACTL &= (~(1 << 0x0000)) ;
		P1OUT ^= 0x0041 ;
	}
}
