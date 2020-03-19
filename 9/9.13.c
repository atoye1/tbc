
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	a = 123;

	int *a_ptr; // * :asterisk

	a_ptr = &a;

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	*a_ptr = 456; // re-direction or de-referencing

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	b = *a_ptr; // 정수형 변수에 주소를 대입
	int *b_ptr;
	b_ptr = &b;
	printf("%d %p\n", b, b_ptr);

	*a_ptr = 789;
	printf("%d\n", b);
	printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);

	b = 12;
	printf("%d\n", b);
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	a = 1004;
	printf("%d %d %p %d\n", a, *a_ptr, a_ptr, b);
	return 0;
}
