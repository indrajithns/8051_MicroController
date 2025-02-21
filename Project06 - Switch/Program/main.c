#include<reg51.h>

sbit LED = P2^0;
sbit SW1 = P2^6;
sbit SW2 = P2^7;

void switch_delay();

void init_confg()
{
	SW1 = 1; // SW1 as Input
	SW2 = 1; // SW2 as Input
}

void main()
{
	init_confg();
	while(1)
	{
		if(SW1 == 0)
		{
			switch_delay();
			LED = 1;
		}
		if(SW2 == 0)
		{
			switch_delay();
			LED = 0;
		}			
	}
}

void switch_delay()
{
	unsigned int i;
	for(i = 0; i<5; i++);
}
