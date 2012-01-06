#include<msp430.h>
<<<<<<< HEAD
unsigned lfsr = 0xAFCCu;
=======
unsigned lfsr = 0xAFE3u;
>>>>>>> ff042a2a6e07e2044d5027c254f6088cbe07bf6d
unsigned bit = 0;
void delay()
{
	int i ;
<<<<<<< HEAD
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
=======
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
>>>>>>> ff042a2a6e07e2044d5027c254f6088cbe07bf6d
}
