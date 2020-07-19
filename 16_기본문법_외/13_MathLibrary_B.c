
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <tgmath.h>

#define SQRT(X) _Generic((X), \
		long double : sqrtl, \
		default : sqrt, \
float : sqrtf)(X)

int main()
{

	double t1 = SQRT(2.0f);
	double t2 = SQRT(2.0);

	if (t1 == t2)
		printf("Identical\n");
	else
		printf("Not Identical\n");

	// tgmath.h
	
	double a1 = sqrt(2.0f);
	double a2 = sqrt(2.0);

	if (a1 == a2)
		printf("Identical\n");
	else
		printf("Not Identical\n");
	return 0;
}
