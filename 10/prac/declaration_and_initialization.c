
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 3;
	int num2 = 6;
	int * num1Pointer = &num1;
	int * num2Pointer = &num2;

	printf("%d, %d, %p, %p\n", num1, *num1Pointer, num1Pointer, &num1);

	printf("%d, %d, %p, %p\n", num2, *num2Pointer, num2Pointer, &num2);
	return 0;
}
