
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// type qualifiers: const, volatile,...
	
	double PI = 3.14159;
	PI = 2.14159;

	int arr[5] = { 1, 2, 3, 4, 5};
	arr[1] = 123;

	double arr2[3] = { 1.0, 2.0, 3.0 };
	arr[0] = 100.0;

	const double* const pd = arr2;
	//*pd = 3.0;
	//pd[2] = 1024.0; // as same as -> arr2[2] = 1024.0;

	printf("%f \n %f\n", pd[2], arr2[2]);

	pd++;

	printf("%f\n %f\n", pd[1], arr2[2]);
	return 0;
}
