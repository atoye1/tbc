//재귀 호출과 스택
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
	my_func(1);

	return 0;
}

void my_func(int n)
{
	printf("Level %d, address of variable n = %ld\n", n, (int)&n);
	if (n < 4)
	{
		//printf("inner IF call\n");
		my_func(n + 1);
	}

	printf("Level %d, address of variable n = %ld\n", n, (int)&n);
}
