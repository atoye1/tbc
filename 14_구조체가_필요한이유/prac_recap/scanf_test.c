
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *name = malloc(1);
	int result = scanf("%s", name);
	printf("the value of scanf %d\n", result);

	printf("%s\n", name);

	return 0;
}
