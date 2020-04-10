/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int el; // file scope with external linkage (global variable)
static int il; // file scope with internal linkage

void testLinkage();

int main()
{
	el = 1024;

	testLinkage();

	printf("%d\n", el);

	return 0;
}
