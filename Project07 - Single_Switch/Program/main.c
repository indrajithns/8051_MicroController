#include<reg51.h>

sbit LED = P2^0;
sbit SW = P2^7;

void switch_delay();

void init_confg()
{
	SW = 1; //Switch as Input
}

void main()
{
	init_confg();
	
	while(1)
	{
		if(SW == 0)
		{
			switch_delay();
			LED = ~LED;
		}
	}
}

void switch_delay()
{
	unsigned int x;
	for(x = 0; x < 50; x++);
}