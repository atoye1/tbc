// Pointer compatibility
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
//	int n = 5;
//	double x;
//
//	x = n; // no error automatic promotion
//
//	int* p1 = &n;
//	printf("%p\n", p1);
//	double* pd = &x;
//
//	pd = (double*)p1;
//
//	int* pt;
//	int (*pa)[3]; //3개짜리 int를 담을 수 있는 배열의 포인터
//
//	int ar1[2][3] = { 3, };
//	int ar2[3][2] = { 7, };
//	int** p2;
//
//	pt = &ar1[0][0];
//	pt = ar1[0];
//
//	pt = ar1;
//
//	printf("\n");
//
//
//	pa = ar1;
//	//pa = ar2;
//	p2 = &pt; // pointer to pointer to int
//	*p2 = ar2[0]; //2개의 int를 가진 배열에 대한 포인터

//	int x = 30;
//	const int y = 23;
//	int* p1 = &x;
//	const int* p2 = &y;
//	const int** pp2 = &p1;
//
//	int x2= 32;
//	int* p3 = &x2;
//	*pp2 = p3;
//	printf("%d\n", **pp2);
//	printf("%d\n", *p3);
//	printf("%d\n", x2);
//	pp2 = &p1;
//	printf("%p\n", *pp2);
//	printf("%p\n", p1);
//
	const int** pp2;
	int* p1;
	const int n = 13;
	pp2 = &p1;
	*pp2 = &n;
	*p1 = 10;


	
	return 0;

}
