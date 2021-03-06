
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Variadic argument accept a variable number of arguments.

#define PRINT(X,...) printf("message" #X": " __VA_ARGS__)
//__VA_ARGS__ one of the predefined macros


//printf(...)
//stdvar.h Variadic arguments

int main()
{
	double x = 48;
	double y;

	y = sqrt(x);
	PRINT(1, "x=%g\n", x);
	printf("Message " "1" ": " "x = %g\n", x);
	PRINT(2, "x=%.2f, y = %.4f\n", x, y);
	return 0;
}
