
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char ch;
	ch = getchar();
	//putchar(ch);
	while (ch != '\n')
	{
		putchar(ch);

		ch = getchar();
		printf("\n");
	}



	return 0;
}
