
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int global_var = 100;

int int_max(int, int);

int main()
{
	int i1, i2;

	int a;

	a = int_max(1,2);
	printf("%d\n", a);
	printf("%p\n", &a);

	{
		int a;

		a = int_max(4,5);
		printf("%d\n", a);
		printf("%p\n", &a);

		int b = 123;
	}

	printf("%d\n", a);
	printf("%p\n", &a);


	return 0;
}

int int_max(int i1, int i2)
{
	return i1 - i2 < 0 ? i2:i1;
}
