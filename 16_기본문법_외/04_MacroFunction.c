
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  Function-like macros

  #define	ADD(X,Y)	((X)+(Y))

  X and Y : macro arguments
  */

#define ADD1(X,Y)	X+Y
#define ADD2(X,Y)	((X)+(Y))
#define SQUARE(X)	X*X

int main()
{
	int sqr = SQUARE(3);

	int a = 1;

	printf("%d\n", 2 * ADD1(1,3));
	printf("%d\n", 2 * ADD2(1,3));

	printf("%d\n", SQUARE(1+2));
	printf("%d\n", 100 / SQUARE(3+1));
	printf("%d\n", SQUARE(++a));

	return 0;
}
