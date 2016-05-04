#include <stdio.h>

void somar(float, float, float*);

void somar(float x, float y, float *r)
{
	*r = x + y;
}

int main(void)
{
	float a;
	float b;
	float c;

	printf("A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);

	somar(a, b, &c);

	printf("S=%f\n", c);

	return 0;

}
