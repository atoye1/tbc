#include "my_functions.h"

#include <stdio.h>

int status = 0;
// main.c 에서 선언한 extern int status를 여기서 정의

int add (int a, int b)
{
	return a + b;
}

void print_status()
{
	printf("Address = %p, Value = %d\n", &status, status);
}

void print_address()
{
	printf("print_address()\n");
	printf("Static function address %p\n", multiply);
	printf("Static variable address %p\n", &si);
}
