#include<msp430.h>
unsigned lfsr = 0xAFCCu;
unsigned bit = 0;
void delay()
{
	int i ;
	for(i=0;i<17171;++i) ;
}
main()
{
while(1)
 {
  P1DIR = 0x40 ;
  bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 5) ^ (lfsr >> 11) ) & 1;
  lfsr =  (lfsr >> 1) | (bit << 15);
  P1OUT = lfsr ;
  delay() ;
 } 
}
