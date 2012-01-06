/* LED as Photo-Sensor
 / By: Gustavo J. Fiorenza (GuShH - info@gushh.net)
 / No external components required, simply shine a light to the RED onboard LED!
 /
 / Note: Tested on a G2452 only, should also work with other value-line MCUs.
*/
 
#include "msp430.h"	// Change the header to "msp430x20x2.h" if you're using the default MCU bundled with the LaunchPad.
 
#define LED_SENSE INCH_0 	// LED 1 (Red LED from LaunchPad).
 
unsigned int adcval = 0;
 
unsigned int analogRead(unsigned int pin) {
 
  ADC10CTL0 = ADC10ON + ADC10SHT_2 + SREF_1 + REFON + REF2_5V;
  ADC10CTL1 = ADC10SSEL_0 + pin;
 
  ADC10CTL0 |= ENC + ADC10SC;
 
  while (1) {
    if ((ADC10CTL1 ^ ADC10BUSY) & ((ADC10CTL0 & ADC10IFG)==ADC10IFG)) {
      ADC10CTL0 &= ~(ADC10IFG +ENC);
      break;
    }
  }
 
  return ADC10MEM;
}
 
void main(void) {
	unsigned int i, delay;
 
	WDTCTL = WDTPW + WDTHOLD;	// Hold the watchdog.
	P1DIR = BIT6; // LED 2 (Green LED from LaunchPad).
 
	while (1){
 
		// Multi-sampling (8 samples with delay for stability).
		adcval = 0;
		for ( i=0; i < 8; i++ ) {
			adcval += analogRead( LED_SENSE );	// Read the analog input.
			delay = 1000;
			while (--delay);
		}
		adcval >>= 3; // division by 8
 
		// Interpret the result
		if ( adcval < 500 ){
			P1OUT |= BIT6;	// Turn on the onboard Green LED.
		}else{
			P1OUT = 0x00;	// Turn off the entire Port 1, thus turning off the LED as well.
		}
 
	}
 
}
