
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);


int main()
{
	return 0;
}

long get_long(void)
{
	printf("Please input an int and press enter.\n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		while ((c=getchar()) != '\n')
			putchar(c);
		printf(" - is not an integer. Please try again.\n");
	}
	printf("Your input %ld is an int.", input);

	return input;
}
