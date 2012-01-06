#include<msp430.h>
<<<<<<< HEAD
main()
{
	int i=0 ;
=======
void delay()
{
	int i ;
	for(i=0;i<20000;++i) ;
}
main()	//red blink.
{
>>>>>>> ff042a2a6e07e2044d5027c254f6088cbe07bf6d
	P1DIR = 0x40;
	while(1)
	{
	P1OUT ^= 0x40;
<<<<<<< HEAD
	while(++i < 20000) ;
=======
	delay();
	P1OUT ^= 0x00;
>>>>>>> ff042a2a6e07e2044d5027c254f6088cbe07bf6d
	}
}
