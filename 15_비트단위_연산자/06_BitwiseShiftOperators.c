
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	/*
	 * Bitwise shift operators
	 *
	 * -left shift
	 *  number << n : multiply number by 2^n
	 *
	 *  -right shift
	 *  number >> n : divide by 2^n
	 */

	// 8 bit integer cases
	//
	printf("%hhd\n", 1 << 3);
	printf("%hhd\n", 8 >> 1);

	return 0;
}
