// Runtime Error를 방지하기 위해  Null Pointer 사용법
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
//	int a = 1234;
//	printf("%p\n", &a);
//	printf("%d\n", a);
//
//	int *ptr = &a;
//
//	printf("%p\n", ptr);
//	printf("%d\n", *ptr);
	int* safer_ptr = NULL; // 아예선언하면서 널값을 넣는 것이 일반적이다.

	int a = 123;

	int b;
	scanf("%d", &b);

	//safer_ptr = &a;

	if (b % 2 == 0)
		safer_ptr = &a;

	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);

	if (safer_ptr != NULL)
		printf("%d\n", *safer_ptr);

	return 0;
}

