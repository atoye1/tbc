
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char* str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void UpdateString(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str =(*pf)(*str);
		str++;
	}
}

int main()
{
	char str[] = "Hello World!";

	void (*pf)(char*);

	pf = ToUpper;

	// Stored in TEXT SEGMENT
	printf("String Literal %lld\n", (long long)("Hello, World!"));
	printf("Function pointer %lld\n", (long long)ToUpper);;
	// Stored in STACK
	printf("Variable %lld\n", (long long)str);

	(*pf)(str);

	printf("ToUpper %s\n", str);

	UpdateString(str, tolower);

	printf("ToLower %s\n", str);

	return 0;
}
