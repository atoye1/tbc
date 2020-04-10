
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int size);

int main()
{
	int arr[] = { 64, 25, 12, 22, 11};
	int n = sizeof(arr)/ sizeof(arr[0]);
	printf("%d\n", n);
	selectionSort(arr, n);

	//printArray(arr, n);
	

	for (int i = 0; i < n; i++) printf("%d ",arr[i]);

	return 0;
}

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	//printf("%d %d", *xp, *yp);
}

//void selectionSort(int arr[], int size)
//{
//	int i, j, min_idx;
//
//	for (i = 0; i < size-1; i++)
//	{
//		min_idx = i;
//		for (j = i+1; j < size; j++)
//			if (arr[j] < arr[min_idx])
//				min_idx=j;
//		swap(&arr[min_idx], &arr[i]);
//	}
//}

void selectionSort(int arr[], int size)
{
	for (int i = 0; i < size-1; i++)
	{
		int min_idx = i;
		for (int j = i+1; j <size; j++)
		{
			printf("j value: %d\n", j);
			if (arr[j] < arr[min_idx])
				min_idx =j;
		}
		printf("min_idx: %d\n", min_idx);
		swap(&arr[min_idx],&arr[i]);
	}
}

