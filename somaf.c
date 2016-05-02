#include <stdio.h>

#include "s.h"

//extern float somar(float,float);

//float somar(float x,float y)
//{
//	return x + y;
//}

int main(void)
{
	float a;
	float b;
	float c;

	printf("A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);

	c = somar(a, b);

	printf("S=%f\n", c);

	return 0;

}
