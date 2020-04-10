
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ChangePlusOne(int* n)
{
	*n += 1;
}

int main()
{
	int number = 3;
	printf("%d\n", number);
	printf("%p\n", &number);

	number = 5;
	printf("%d\n", number);
	printf("%p\n", &number);

	ChangePlusOne(&number);
	printf("%d\n", number);
	printf("%p\n", &number);


	return 0;
}
