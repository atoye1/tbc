
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <tgmath.h>

int main()
{
	printf("%f\n", cos(3.141592));

	double c= 5.9123, b = 4.5123, a; // a?
	a = sqrtl(c * c - b * b); // gcc % -lm required
	printf("%zd\n", sizeof(a));
	printf("a = %lf\n", a);

	float cf = 5.9123f, bf=4.5123f, af;
	af = sqrtf(cf * cf - bf * bf);
	printf("%zd\n", sizeof(af));
	printf("af = %f\n", af);
	return 0;
}
