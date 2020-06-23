
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// ONE Variable
	int *ptr = NULL;

	ptr = (int*)malloc(sizeof(int) * 1);
	if (!ptr) exit(1);

	*ptr = 1024 * 3;
	printf("%d\n", *ptr);
	
	free(ptr);
	ptr = NULL;

	// 1D Array
	
	int n = 3;
	ptr = (int*)malloc(sizeof(int)*n);
	if (!ptr) exit(1);
	ptr[0] = 123;
	*(ptr + 1) = 456;
	*(ptr + 2) = 789;

	for (int i = 0; i <= sizeof(ptr)/sizeof(ptr[0]); i++) printf("%d ", ptr[i]);
	printf("\n");

	free(ptr);
	ptr = NULL;
	
	// 2D Array
//	int row = 3, col = 2;
//	int(*ptr2d)[2] = (int(*)[2])malloc(sizeof(int) * row * col);
//	//int(*ptr2d)[col] = (int(*)[col]malloc(sizeof(int)*row*col);
//	if (!ptr2d) exit(1);
//
//	for (int r =0; r < row; r++)
//		for (int c = 0; c < col; c++)
//			ptr2d[r][c] = c + col * r;
//
//	for (int r = 0; r < row; r++)
//	{
//		for (int c = 0; c < col; c++)
//			printf("%d ", ptr2d[r][c]);
//		printf("\n");
//	}
//	
//	Using 1D Array like 2D Array
//	c + col * r

	int row = 3, col = 2;
	int *ptr2d = (int *)malloc(sizeof(int) * row * col);
	if (!ptr2d) exit(1);

	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			ptr2d[c+col*r] = c + col * r;
	for (int r = 0; r < row; r ++)
	{
		for (int c = 0; c < col; c ++)
			printf("%d ", *(ptr2d + c + col * r));
		printf("\n");
	}
		



	return 0;
}
