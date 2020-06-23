
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x;
	char str[] = "Dancing with a Star";

	int arr[100];

	/*
	 * malloc() : returns a void type pointer
	 * void* : generic pointer
	 *
	 * free() deallocates the memory
	 */

	double *ptr = NULL;

	ptr = (double*)malloc(30*sizeof(double)); //void pointer를 double type으로 형변환 

	if (ptr == NULL)
	{
		puts("Memory allocation failed.");

		// exit(EXIT_FAILURE) is similar to return 1 IN main()
		// exit(EXIT_SUCCESS) is similar to return 0 IN main()

		exit(EXIT_FAILURE);
	}
	
	printf("Before free %p\n", ptr);

	free(ptr);

	printf("After free %p\n", ptr);

	ptr = NULL; //optional
	printf("After free %p\n", ptr);

	/* Dynamically Allocated Array */

	int n = 5;

	ptr = (double *)malloc(n * sizeof(double));

	if (ptr != NULL)
	{
		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");

		for (int i =0; i < n; ++i)
			*(ptr + i) = (double)i;
		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");
	}

	return 0;
}
