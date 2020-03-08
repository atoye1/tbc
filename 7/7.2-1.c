
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
//	int ch;
//	ch = getchar(); // int형도 문자로 반환
//
//	while ((ch = getchar()) != '\n')
//	{
//		printf(" <---   Putchar_called\n");
//		putchar(ch);
//	}
//putchar(ch);
//	printf("newlined?");
	
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if ( ch>= 'a' && ch  <= 'z')
			ch -= 'a' - 'A';
		else if(ch <='a' && ch >= 'A')
			ch += 'a' - 'A';
		putchar(ch);

	}

	return 0;
}
