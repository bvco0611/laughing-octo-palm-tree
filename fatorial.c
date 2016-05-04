/*
	brunocassolorengo@gmail.com
*/

#include <stdio.h>

double fatorial(double);

double fatorial(double n)
{
	double r = 1L;
	double f;	
	
	for(f = 1; f <= n; f = f + 1)
		r = f * r;
	
	return r;
}

int main(void)
{

	double n;	
	scanf("%lf", &n);
	
	double f = fatorial(n);

	printf("N=%.0lf, F=%.0lf\n", n, f);

	return 0;
}
