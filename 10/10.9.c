
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	 * Pointer operations
	 * -Assignment
	 * -Value Finding (dereferencing)
	 * -Taking a pointer address
	 * -Adding an integer to a pointer
	 *  Incrementing a pointer
	 *  Subtracting an integer from a pointer
	 *  Decrementing a pointer
	 *  Differencing
	 *  Comparisons
	 */

	int arr[5] = { 100, 200, 300, 400, 500};
	int* ptr1, * ptr2, * ptr3;

	int i = 0;
	ptr1 = &i;

	ptr1 = arr; // Assignment 포인터 변수에 주소를 대응가능

	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);
	// Dereferencing, Taking a pointer to value
	
	ptr2 = &arr[2]; //Address-of operator&
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2); 
	
	ptr3 = ptr1 + 4; // Adding an integer from a pointer 
	// int type를 선언했으므로 4바이트 짜리 int 4개 공간만큼 값을 더함
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3); 

	//Differencing
	printf("%td\n", ptr3 - ptr1); //Note: t is for pointer difference

	ptr3 = ptr3 -4;
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3); 
	
// 포인터간 비교 가능
	double d = 3.14;
	double* ptr_d = &d;
	if (*ptr1 == ptr_d)
		printf("Same\n");
	else
		printf("Different\n");
	return 0;
}
