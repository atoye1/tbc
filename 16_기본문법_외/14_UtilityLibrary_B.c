
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

// causes undfined behavior if i <=0
// exits if i >0

_Noreturn void stop_now(int i)
{
	if ( i > 0) exit(i);
}	

int main()
{
	puts("preparing to stop ...");
	stop_now(1);
	puts("This code is never executed.");

	return 0;
}
