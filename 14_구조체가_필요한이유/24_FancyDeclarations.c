
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int temp(int a)
{
	return 0;
}

int (*g(int a))(int)
{
	return temp;
}

// *  indicates a pointer
// () indicates a function
// [] indicates an array

/* Deciphering Complex Declaration
 * Always read from inside out.
 * when there is a choice, always favor [] and () over *(asterisk)
 */

int* ap[10]; // ap is an array of pointers

typedef int* pint;
pint ap2[10];

float* fp(float);
typedef float* pfloat;
pfloat fp2(float);

void (*pf)(int);
/*
 * 	void (*pf) (int)
 * 		1	1.pointer to
 * 		     2	2. function(named pf) with int argument
 * 	  3		3. returning void
 */

int* (*x[10])(void);
	// array of pointers to function(name is x) with void argument returning pointer to int

int f(int)[]; //Wrong Can't return Array itself

int (*f(int))[]; // Can return POINTER TO ARRAY;
//function with int argument return pointer to int array
//
//int g(int)(int); -> function with int arg return function
int (*g(int))(int); // function with int arg return pointer to function is AVAILABLE!!

int* (*x2[10])(int);
// array of pointers to function with int arg return pointer to function returning int value
// int가 들어오고 int를 반환하는 함수에 대한 포인터를 10개 배열로 저장할수 있는 자료형

typedef int FCN(int);
typedef FCN* FCN_PTR;
typedef FCN_PTR FCN_PTR_ARRAY[10];
FCN_PTR_ARRAY x3;

int* (*myfunc(int))[10];


/* More Examples */
int board[6][4]; //an array of arrays of int
int** ptr;

int* risks[10] // A 10-elem array of pointers to int
int(*rusk)[10] // pointer to array contains 10 elem of int

int* off[3][4] // an array of arrays of pointers to int
int(*uff)[3][4] // Pointer to an array of 3*4 ints
int(*uof[3])[4] // an 3element array of pointers to 4-element arrays of int

char* func(void);
char (*func1(void));
char (*func2[3])(void);

typedef int arr5[5];

