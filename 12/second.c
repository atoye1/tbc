
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int el;
extern int il;
//static int il;

void testLinkage()
{
	printf("DoSomething called\n");
	printf("%d\n", el);

	el++;
}

