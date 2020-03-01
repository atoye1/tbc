// For 루프를 배열과 함께 사용하기

#include <stdio.h>
#define SIZE 5

int sum_func()
{
	int sum_arr[SIZE];
	int sum_result = 0;
	int j;
	for (int j = 0 ;j < SIZE; ++j)
	{	printf("INPUT VALUE  %d :", j+1);
		scanf("%d", &sum_arr[j]);
		printf("\n");
	}
	
	for (int j =0 ; j < SIZE  ;++j)
	{
		printf("value is = %d \n", sum_arr[j]);
		sum_result += sum_arr[j];
	}

	printf("result = %d\n", sum_result);
	return 0;
}

int main()
{
	sum_func();
	/* Motivation */
	//int i1 = 0;
	//int i2 = 1;
	//int i3 = 2;

	//printf("%d\n", i1);
	//printf("%d\n", i2);
	//printf("%d\n", i3);

	int my_arr[SIZE];

	// prepare for array data
	for (int i = 0; i < SIZE; ++ i)
		my_arr[i] = i * i;

	//print array data
	for (int i = 0; i < SIZE; ++i)
		//my_arr[i] = j;
		printf("%d\n", my_arr[i]);
	return 0;
}
	
