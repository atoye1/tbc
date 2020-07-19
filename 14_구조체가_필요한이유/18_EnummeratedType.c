
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// Enumerated type
	// symbolic names to respresent integer constants
	// improve readability and make it easy to maintain
	// enum-specifier
	
	enum spectrum { red , orange, yellow, green, blue, violet };

	enum spectrum color;
	color = blue;

	if (color == yellow)
		printf("옐로우\n");
	printf("%d\n", color); //enums are not string

	for (color = red; color <= violet; color++)
		printf("%d\n", color);

	enum pet { cat, dog = 10, lion, tiger};
	printf("cat %d lion %d\n", cat, lion);
	return 0;
}
