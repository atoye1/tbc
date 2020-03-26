
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(const int arr[],const int n)
{
	for (int i=0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void add_value(int arr[], int n, int val)
{
	int i;
	for (i = 0; i < n; i ++)
		arr[i] += val;
}

int sum(const int arr[], int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
	{
		total += arr[i] ; //intentional malfunction
		printf("total : %d\n", total);
	}
	
	return total;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, 5);
	add_value(arr, 5, 100);
	print_array(arr, 5);

	int s = sum(arr, 5);
	
	printf("Sum is : %d\n", s);
	
	print_array(arr, 5);

	return 0;
}
