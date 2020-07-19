
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Flexible array member
	
	struct flex
	{
		size_t count;
		double average;
		double values[];
	};

	const size_t n=3;
	
	struct flex* pf = (struct flex*)malloc(sizeof(struct flex) + n * sizeof(double));
	if (pf == NULL) exit(1);
	return 0;
}
