
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memcpy(), memmove()

#define LEN 6

void prt(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr1[LEN] = { 1, 3, 5, 7, 9, 11 };
	// int arr2[LEN] = { 0, };
	int* arr2 = (int *)malloc(sizeof(int) * LEN);
	if (arr2 == NULL) exit(1);

	for (int i = 0; i < LEN; ++i)
		arr2[i] = arr1[i];

	memcpy(arr2, arr1, sizeof(int) * LEN);
	//    (dest, source, size)
	prt(arr2, LEN);

	// {1, 3, 5, 7, 9, 11 }
	// {5, 7, 9, 11, 9, 11}

	void* ptr = memcpy(arr1, &arr1[2], sizeof(int) * 4); // 겹치는 부분이 있을 경우 컴파일러에 따라 
	//undefined behavior가 뜰 수 있다.

	memmove(arr1, &arr1[2], sizeof(int) * 4);
	// 버퍼를 활용하므로 겹치는 부분이 없어도 가능
	// 겹치는 부분이 있을 때는 memmove() is better than memcpy()

	//prt(arr1, LEN);

	return 0;
}
