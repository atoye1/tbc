
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_functions.h"
#include "my_structures.h"
#include "my_headers/my_macros.h" // Path
#include "macros.h"
//#include "my_functions.c" // or gcc % my_functions.c

//#include "D:\myfolder\TBC\chapter16\my_macros.h" //절대경로로 지정 가능하긴 하다.

extern int status;

int main()
{
#include "hello_world.h" // printf("Hello, World from a header file.\n");
// above is not allowed as a coding convention
	
	printf("PI = %f\n", PI);
	printf("%p %d\n", &status, status);

	printf("main()\n");
	printf("Static function address %p\n", multiply);
	printf("Static variable address %p\n", &si);

	print_address();

	return 0;
}
