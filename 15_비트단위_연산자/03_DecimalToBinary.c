
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
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);

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
