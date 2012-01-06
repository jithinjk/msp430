#include<msp430.h>
<<<<<<< HEAD
main()
{
	int i=0;
	P1DIR = 0x01;
	while(1)
	{
	P1OUT ^= 0x01;
	while(++i < 20000) ;
=======
void delay()
{
	int i ;
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
>>>>>>> ff042a2a6e07e2044d5027c254f6088cbe07bf6d
	}
}
