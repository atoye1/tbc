// exercises from prosto.tistory.com/253
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exp_f(int* Ptr)
{
	*Ptr *= *Ptr;
}

int main()
{
	int n;
	scanf("%d", &n);

	exp_f(&n);
	printf("%d\n", n);

	return 0;
}
