
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * automatic storage class
 * automatic storage duration, block scope, no linkage,
 * 메모리에 상주하지 않으므로 링키지가 없다.
 * any variable declared in a block or function header
 */
void func(int k);

int main()
{
	auto int a; // storage class specifier doesn't matter if it isn't
	printf("%d\n", a);
	auto int b = a*3; // automatic variable은 자동으로 초기화해주지 않는다.

	int i = 1;
	int j = 2;
	printf("i %lld\n", (long long)&i);

	{
		int i = 3;
		printf("i %lld\n", (long long)&i);

		printf("j = %d\n", j);
	}

	printf("i %lld\n", (long long)&i);

	for (int m = 1; m < 2; m++)
		printf("m %lld\n", (long long)&m);
	return 0;
}
