
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second)
{
	if (*(float*)first < *(float*)second)
		return 1;
	else if (*(float*)first >*(float*)second)
		return -1;
	else
		return 0;
} // scrcmp()와 비슷한 구조임


int main()
{
	float arr[] = { 8.1f, 2.1f, 5.1f, 3.1f, 6.1f, 11.0f};
	int n = sizeof(arr)/sizeof(float);

	qsort(arr, n , sizeof(float), compare); // qsort() is in stdlib

	for (int i = 0; i < n; i++)
	{
		printf("%f ", arr[i]);
	}

	return 0;
}
