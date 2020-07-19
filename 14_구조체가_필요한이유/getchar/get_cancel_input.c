
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input_string[10];
	if (NULL != fgets(input_string, 10, stdin))
	{
		printf("input : %s\n", input_string);
	}
	else
	{
		printf("input-> Canceled\n");
	}

	return 0;
}
