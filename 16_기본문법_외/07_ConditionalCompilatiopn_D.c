/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#define _DEBUG

int sum(int i, int j)
{
	int s = 0;
	for (int k = i; k <=j; ++k)
	{
		s+=k;

#ifdef _DEBUG //empty macro
		printf("%d %d\n", s, k);
#endif
	}

	return s;
}

int main()
{
	printf("\n%d \n", sum(1, 10));

	return 0;
}
