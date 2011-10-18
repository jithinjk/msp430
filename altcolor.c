#include<msp430.h>
int red()
{
	long int i = 0;
	for( i = 0; i < 10000 ; ++i);
	P1DIR = 0x01 ;
	P1OUT = 0x01 ;
	green();
}
int  green()
{
	long int i = 0 ;
	for( i = 0; i < 10000; ++i);
	P1DIR = 0x40 ;
	P1OUT = 0x40 ;
	red();
}
main()
{
	red();
}
