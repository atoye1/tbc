/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char** xp, char** yp);
void printStringArray(char* arr[], int size);
void selectionSort(char* arr[], int n);

int main()
{
	char* arr[] = {"Cherry", "AppleBee", "Pineapple", "Apple", "Orange"};
	int n = sizeof(arr) / sizeof(arr[0]);

	//swap(&arr[2], &arr[1]);

	printStringArray(arr, n);
	selectionSort(arr, n);
	printf("\n");
	printStringArray(arr, n);

	return 0;
}

void printStringArray(char* arr[], int size)
{
	for (int i = 0; i < size ; i++)
	{
		puts(arr[i]);
	}
}

void swap(char** xp, char** yp)
{
	char* temp;
	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(char* arr[], int n)
{
	for (int i = 0; i <n-1; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(arr[min_idx], arr[j]) > 0 )
				min_idx = j;
		}
		char* temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
		//swap(&arr[i], &arr[min_idx]);
	}
};
	
