
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1(int hello, double world);

double func_block(double d)
{
	double p = 0.0;

	int i;
	for (i = 0; i < 10; i++)
	{
		double q = d * i;
		p *= q;

		if (i ==5)
			goto hello;

	}

hello:
	printf("Hello, world");

	return p;
}

int main()
{
	func_block(3.14);

	return 0;
}
