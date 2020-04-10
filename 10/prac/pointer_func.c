
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DoubleIt(int *Ptr)
{
	*Ptr *= 2;
}
	

int main()
{
	int num = 2;

	printf("%d\n", num);

	
	DoubleIt(&num);
	printf("%d\n", num);

	return 0;
}
