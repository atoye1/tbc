
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MY_NUMBER 3

typedef int mytype;

static int mul(mytype a)
{
	return a * a;
}

int main()
{
	printf("2 * 2 = %d\n", mul(MY_NUMBER));
	return 0;
}
