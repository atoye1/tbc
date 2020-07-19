/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define REPORT

int sum(int i, int j)
{
	int s = 0;
	for (int k = 0; k <=j; ++k)
	{
		s+=k;

#ifdef REPORT //empty macro
		printf("%d %d\n", s, k);
#endif
	}

	return s;
}

int main()
{

	return 0;
}
