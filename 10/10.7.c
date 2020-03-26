
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double *arr1, int n) //함수에서 배열을 받을때는 포인터로!!
{
	printf("size = %zd in function average\n", sizeof(arr1));
	double avg = 0.0;
	for (int i = 0; i < n; ++i)
	{
		avg += arr1[i];
	}
	avg /= (double)n;

	return avg;

}

int main()
{
	double arr1[5] = {10, 13, 12, 7, 8};
	double arr2[5] = { 1.8, -0.2, 6.3, 13.9, 20.5};
	double arr3[3] = {1.0, -0.2, 2.2};
	
	printf("Address = %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1));

	
	printf("Avg = %f\n", average(arr1, sizeof(arr1)/sizeof(double)));
	printf("Avg = %f\n", average(arr3, sizeof(arr3)/sizeof(double)));
	//printf("Avg = %f\n", average(arr3));

	return 0;
}
