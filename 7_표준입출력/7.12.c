
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != '.')
	{
		printf("You love ");

		switch (c) // Note: interger types only
		{
			case 'a':
				printf("apple");
				break;
			case 'b':
				printf("baseball");
				break;
			case 'c':
				printf("cake");
				break;
			default:
				printf("nothing");
		}
		printf(".\n");

		while (getchar() !='\n')
			continue;
		
	}				
	return 0;
}
