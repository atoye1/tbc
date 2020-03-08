
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j =0; j < 10; j++)
		{
			if (j == 5)
			{
				printf("break");
				break;
			}

			printf("(%d %d)", i, j);
		}
		printf("\n");
	}
	return 0;
}
