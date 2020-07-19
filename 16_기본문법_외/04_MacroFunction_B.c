
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Stringizing operator #
//-converts macro parameters to string literals

#define SQUARE(X)	(X)*(X)
#define PRINT_SQR1(x)	printf("The square of %d is %d.\n", x, SQUARE(x))
#define PRINT_SQR2(x)	printf("The square of " #x " is %d.\n", SQUARE(x))

// ##Operator combines two tokens into a single token

#define XNAME(n)	x ## n
#define PRT_XN(n)	printf("x" #n " = %d\n", x ## n)

int main()
{
	PRINT_SQR1(5);
	PRINT_SQR2(5);

	int XNAME(1) = 1; // int x1 = 1;
	int XNAME(2) = 2; // int x2 = 2;
	PRT_XN(1);
	PRT_XN(2);

	return 0;
}
