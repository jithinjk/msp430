#include<msp430.h>
unsigned lfsr = 0xAFE3u;
unsigned bit = 0;
void delay()
{
	int i ;
	for(i=0;i<13531;++i) ;
}
main()
{
do {
  P1DIR = 0x40 ;
  bit  = ((lfsr >> 0) ^ (lfsr >> 3) ^ (lfsr >> 5) ^ (lfsr >> 7) ) & 1;
  lfsr =  (lfsr >> 1) | (bit << 15);
  P1OUT = lfsr ;
  delay() ;
} while(0xAFE3u);
}
