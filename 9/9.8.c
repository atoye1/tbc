//팩토리얼 예제
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
	int num = -12;
	printf("MAIN FUNCTION CALLED\n");
	printf("%ld\n", loop_factorial(num));
	printf("%ld\n", recursive_factorial(num));

	return 0;
}

long loop_factorial(int n)
{
	long result = 1;
	for (n ; n >1 ; n--)
	{
		result *= n;
		//printf("%ld\n", result);
	}
	return result;
}

long recursive_factorial(int n)
{
	if (n == 1)
		return 1;
	return n*recursive_factorial(n-1);
}
		
