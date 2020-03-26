
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[2][3] = { {1, 2, 3},
			{4, 5, 6} };
	
	int *ptr = &arr[0][0];
	for (int k = 0; k < 6; ++k)
		printf("%d ", ptr[k]);
	printf("\n\n");

	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
	return 0;
}
