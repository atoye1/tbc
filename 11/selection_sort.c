/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void selection_sort(int my_arr[]);

int main()
{
	int my_arr[5] = { 64, 25, 12, 22, 11};

	selection_sort(my_arr);
	
	for (int i = 0 ; i < 5; i++)
		printf("%d ", my_arr[i]);
	
	return 0;
}

void selection_sort(int my_arr[])
{
//	int length = sizeof(*my_arr)/sizeof(int);
//	printf("%d\n", length);

	for (int i = 0; i < 5-1; i++)
	{
		printf("%d\n", i);
		int min_idx = i;
		for (int j = i+1; j < 5; j++)
			{
				if (my_arr[j] > my_arr[i]) 
					min_idx = j;
			}
		int temp;
		my_arr[i] = temp; 
		my_arr[i] = my_arr[min_idx];
		my_arr[min_idx] = temp;
	}
}

