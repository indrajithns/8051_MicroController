#include<reg52.h>           // special function register declaration 
                            // for the intended 8051 derivativ
 sbit LED = P2^0;           // Defining LED pin
 void Delay(void);          // Function prototype declaration
 void main (void)
 {
 /*
		while(1)                // infinite loop
			{
					LED = 0;            // LED ON
					Delay();
				
					LED = 1;            // LED OFF
					Delay();
			}
*/
	 
	 while(1)
	 {
		 LED = ~ LED;  //Inverting the LED Bit
		 Delay();
		 
   }
 }
	 
 void Delay(void)
 {
    unsigned int i, j;
    for(i=0;i<100;i++)
    {
        for(j=0;j<1000;j++)
        {
        }
    }
 }
	
