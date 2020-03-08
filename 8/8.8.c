
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input;

	printf("Enter the letter of your choice:\n");
	printf("a. avengers\tb. beep.\n");
	printf("c. count\td. quit.\n");

	while (1)
	{
		scanf("%d", &input);
		if (input == 'a')
			printf("Avengers assemble!\n");
	}
	return 0;
}
