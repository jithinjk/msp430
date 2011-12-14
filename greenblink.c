#include<msp430.h>
main()
{
	int i=0;
	P1DIR = 0x40;
	while(1)
	{
	P1OUT ^= 0x40;
	while(++i < 20000);
	}
}
