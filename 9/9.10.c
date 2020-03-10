//피보나치 수열과 재귀호출
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int number);

//finonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)

int main()
{
	for (int count = 1; count < 13; ++count)
		printf("%d ", fibonacci(count));
	return 0;
}

int fibonacci(int number)
{
	printf("fibo with %d\n", number);
	if (number == 1 || number ==2)
		return 1;
	return fibonacci(number-1) + fibonacci(number -2);
}
