#define _CRT_SECURE_NO_WARNINGs
#include <stdio.h>
#include <math.h> // pow() To use this func compile like this -> gcc %.c -lm
#include <string.h> // strlen()
#include <stdlib.h> // exit()

unsigned char to_decimal(const char bi[]);

int main()
{
	printf("Binary (string) to Decimal cnversion\n");

	printf("%d\n", to_decimal("00000110")); // i*(2^2) + 1 *(2^1) = 6
	printf("%d\n", to_decimal("00010110"));

	printf("%d\n", to_decimal("10010100"));

	return 0;
}

unsigned char to_decimal(const char bi[])
{
	const size_t n = strlen(bi); // size_t used for compatability(instead of int)
	printf("strlen value : %lu\n", n);
	int result = 0;

	for (size_t i = 0; i <n; i++)
	{
		if (bi[i] == '1')
		{
			printf("pow value: %d\n", (int)pow(2, n -1 -i));
			result += pow(2, n-i-1);
		}
	}
	
	return result;
}
