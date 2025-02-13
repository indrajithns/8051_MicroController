#include<reg51.h>

void Delay(int a);

void main()
{
	while(1)
	{
		P2 = 0xFF;
		Delay(100);
		
		P2 = 0xFE;
		Delay(100);
		
		P2 = 0xFD;
		Delay(100);
	
		P2 = 0xFB;
		Delay(100);
		
		P2 = 0xF7;
		Delay(100);
		
		P2 = 0xEF;
		Delay(100);
		
		P2 = 0xDF;
		Delay(100);
		
		P2 = 0xBF;
		Delay(100);
		
		P2 = 0x7F;
		Delay(100);
	}
}

void Delay(int a)
{
	unsigned int x, y;
	for(x = 0; x < 100; x++)
	{
		for(y = 0; y < a; y++);
	}
}
