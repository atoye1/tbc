
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define _WIN64

void say_hello()
{
#ifdef _WIN64
	printf("Hello, Win64");
#elif _WIN32
	printf("Hello, Win32");
#elif __linux__
	printf("Hello, LINUX");
#endif
}
	

int main()
{
	say_hello();

	return 0;
}
