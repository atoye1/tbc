
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	 * Union
	 * store different data typees in the same memory space
	 * structure vs union
	 */

	union my_union {
		int 	i;
		double 	d;
		char 	c;
	};

	union my_union uni;

	printf("%zd\n", sizeof(union my_union));
	printf("%lld\n", (long long)&uni);
	printf("%lld %lld %lld\n", (long long)&uni.i,(long long)&uni.d,(long long)&uni.c);

	union my_union save[10];

	printf("%zd\n", sizeof(save));

	/* Union of different types */

	union my_union uni1;

	uni1.c = 'A';
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);

	uni1.i = 0;
	uni1.c = 'A';
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);

	uni1.d = 1.2;
	printf("%d %f %d %c\n", uni1.i, uni1.d, (int)uni1.c, uni1.c);

	/* Initializing Unions */

	union my_union uni2= uni1; 			//copy another union
	union my_union uni3= { 10 }; 			// First elem only
	union my_union uni4= {.c = 'A'};		//Designated initializer
	union my_union uni5= {.d = 1.23, .i = 100};	// Do Not Recommend

	printf("%d %f %c\n", uni5.i, uni5.d, uni5.c);

	uni.i = 123;
	uni.d = 1.2;
	uni.c = 'k';

	printf("%d %f %c\n", uni.i, uni.d, uni.c);
	
	union my_union* pu = &uni; // Pointer to union
	int x = pu->i;
	uni.c = 'A';
	double real = 3.14 * uni.d;
	return 0;
}
