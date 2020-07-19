
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	for (int i = 0; i < 10; ++i)
	{
		if (i == 5)
			break;

		printf("%d ", i);
	}

	int count = 0;
//	while (count < 5)
//	{
//		int c = getchar();
//		if (c == 'a')
//			continue;
//		putchar(c);
//		count++;
//	}
	for (int count = 0; count < 10; ++count)
	{
		int c = getchar();
		if ( c== 'a')
			printf("a");
			continue;
		putchar(c);
	}

	/* contunue as a placeholder */

	while (getchar() != '\n')
		continue;
			

	

	return 0;
}
