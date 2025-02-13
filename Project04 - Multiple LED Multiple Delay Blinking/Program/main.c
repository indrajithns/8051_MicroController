#include<reg51.h>

void Delay(int time);

void main()
{
	while(1)
	{
		char temp;
		for(temp = 0; temp < 4; temp++)
		{
			P2 = 0xAA;
			Delay(200);
			
			P2 = 0x55;
			Delay(200);
		}
		
		for(temp = 0; temp < 4; temp++)
		{
			P2 = 0xCC;
			Delay(200);
			
			P2 = 0x33;
			Delay(200);
		}
		
		for(temp = 0; temp < 4; temp++)
		{
			P2 = 0xF0;
			Delay(200);
			
			P2 = 0x0F;
			Delay(200);
		}
	}
}

void Delay(int time)
{
	unsigned int x, y;
	for(x = 0; x < time; x++)
	{
		for(y = 0; y < time; y++);
	}
}