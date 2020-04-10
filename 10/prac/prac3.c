
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *x, int*y);

int main()
{
	int x, y;
	printf("number 1: ");
	scanf("%d", &x);

	printf("number 2: ");
	scanf("%d", &y);

	printf("before swapping\n");
	printf("num1: %d, num2: %d\n", x, y);

	printf("after swapping\n");
	swap(&x, &y);
	printf("num1: %d, num2: %d\n", x, y);

	return 0;
}

void swap(int *x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
