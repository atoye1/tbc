
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*
	 * rand()
	 * 0 to RAND_MAX(typicall INT_MAX)
	 * defined in stdlib.h
	 */
	
	//srand(3);
	//srand((unsigned int)time(0));
	for (int i = 0; i < 10; i ++)
	{
		printf("%d\n", rand());
	}

	unsigned int next = (unsigned int)time(0);

	for (int i = 0; i < 10; i ++)
	{
		next = next *1103515245 + 1234;
		next = (unsigned int) (next /65535) % 32768;
		printf("%d\n", (int)next);
	}

	return 0;
}
