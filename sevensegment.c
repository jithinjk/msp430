#include<msp430.h>
#define zero 0x3f
#define one 0x06
#define two 0x5b
#define three 0x4f
#define four 0x66
#define five 0x6d
#define six 0x7d
#define seven 0x07
#define eight 0x7f
#define nine 0x6f
void delay()
{
         long int i ;
         for(i=0;i<36000;++i) ;
}
main()
{
	P1DIR = zero | one | two | three | four | five | six | seven | eight | nine;
	int i=0;
	while(1)	
	{
		P1OUT = zero;
		delay();
		P1OUT = one;
		delay();
		P1OUT = two;
		delay();
		P1OUT = three;
		delay();
		P1OUT = four;
		delay();
		P1OUT = five;
		delay();
		P1OUT = six;
		delay();
		P1OUT = seven;
		delay();
		P1OUT = eight;
		delay();
		P1OUT = nine;
		delay();
	}
}
