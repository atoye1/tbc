
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> // time()

int main()
{
	typedef unsigned char BYTE; //NOTE the scope of BYTE

	BYTE x, y[10] = { 0, }, * z = &x;

	{
		typedef unsigned char byte;

		size_t s = sizeof(byte);
	}

	time_t t = time(NULL);

	printf("%ld\n", t);


	// Typedef vs define
	// Typedef is performed by compiler not preprocessor
	// #define is simple copy&paste	
	typedef char* STRING;
	STRING name = "John Wick", sign = "World";

	printf("%s\n%s", name, sign);

	typedef struct complex {
		float real;
		float imag;
	} COMPLEX;

	typedef struct { double width; double height;} rect;
	rect r1 = { 1.1, 2.2};
	rect r2 = r1;

	printf("%f %f\n", r2.width, r2.height);
	return 0;

}
