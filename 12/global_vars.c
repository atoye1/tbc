
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_i = 123;
int g_j;

void func1()
{
	g_i++;
}

void func2()
{
	g_i+=2;
}

int main()
{
	int local = 1234;

	func1();
	func2();

	printf("%d", g_i);

	return 0;
}
