#include<msp430.h>
unsigned lfsr = 0x0001;
main()
{ 
 int i;
 P1DIR = 0x01 ;
 while(1)
 {
  lfsr = (lfsr >> 1) ^ (-(lfsr & 1u) & 0xD0000001u); 
  while(++i < 20000) ;
P1OUT = lfsr;
 }
}
