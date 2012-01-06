#include<msp430.h>
main()
{
	while((P1IN >> 3) != 0)
	{

	}
	P1DIR = 0x01 ;
	P1OUT = 0x01 ;
}

