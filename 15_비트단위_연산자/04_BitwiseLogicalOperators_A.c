
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main()
{
	unsigned char a = 6;
	unsigned char b = 5;

	printf("%hhu\n", a);
	print_binary(a);

	printf("%hhu\n", b);
	print_binary(b);

	printf("%hhu\n", a&b);
	print_binary(a&b);

	printf("%hhu\n", a|b);
	print_binary(a|b);

	printf("%hhu\n", a ^ b);
	print_binary(a ^ b);

	printf("%hhu\n", ~a);
	print_binary(~a);
	return 0;
}

unsigned char to_decimal(const char bi[])
{
	size_t bit = strlen(bi);
	size_t sum = 0;

	for (size_t i= 0; i <bit; i++)
	{
		if (bi[i] == '1')
		{
			sum += pow(2, bit - 1 -i);
		}
	}

	return sum;
}

void print_binary(const unsigned char num)
{

	printf("Decimal\t%d\t== Binary", num);

	const size_t bits = sizeof(num) * 8; //size_t type is return value of sizeof()
	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask =
			//(unsigned char)pow((double)2, (double)(bits - 1 - i));
			pow(2, (bits -1 -i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}
