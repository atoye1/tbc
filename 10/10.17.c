
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum2d_4(int row, int col, int ar[row][col])
{
	int r, c, tot=0;
	for (r = 0; r < row; r++)
		for (c=0; c < col; c++)
		{	tot+= ar[r][c];
			printf("%d\n", tot);}
			
	return tot;
}

int main()
{
	int n;
	int ROWS, COLS;

	scanf("%d %d", &ROWS, &COLS);
	
	float my_arr[n];

	printf("%ld\n", sizeof(my_arr));

	int data[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	printf("%d\n", sum2d_4(ROWS, COLS, data));
	return 0;
}
