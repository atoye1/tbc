// C언어에서의 포인터형 매개변수
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int a = 123;
	int b = 456;

	// swap
	
//	int temp = a;
//	a = b;
//	b = temp;
//
	printf("%p %p\n", &a, &b);

	swap(&a,&b);

	printf("%d %d\n", a, b);


	return 0;
}


void swap(int *a, int *b)
{
	printf("swap func called\n");
	printf("%p %p\n", a, b);
	int temp = *a;
	*a = *b;
	*b = temp;
}
