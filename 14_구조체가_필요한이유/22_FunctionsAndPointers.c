
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void ToUpper(char *str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char *str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void StringChange(char *str, char *option)
{
	while (*str)
	{
		if (strcmp(option, "upper"))
			*str = tolower(*str);
		else
			*str = toupper(*str);
		str++;
	}
}

void UpdateString(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}

int main()
{
	char str[] = "Hello, World!";

	void (*pf)(char *);

	pf = ToUpper;

	printf("String literal %lld\n", (long long)("Hello, World!"));
	printf("Function pointer %lld\n", (long long)ToUpper);
	printf("Variable %lld\n", (long long)str);

	pf(str);
	printf("%s\n", str);

	pf = ToLower;
	pf(str);
	printf("%s\n", str);


	void (*pf1)(char *, char*);
	pf1 = StringChange;
	pf1(str, "upper");
	printf("%s\n", str);

	UpdateString(str, toupper);
	printf("ToUpper %s\n", str);

	UpdateString(str, tolower);
	printf("ToLower %s\n", str);


	// __cdecl is function calling convention

	return 0;
}
