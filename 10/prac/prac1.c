
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("숫자 입력 : ");
	scanf("%d", &n);

	int * nPtr = &n;

	printf("num: %d\n", n);
	printf("*numP: %d\n", *nPtr);
	printf("&num: %p\n", &n);
	printf("numP: %p\n", nPtr);

	return 0;
}
