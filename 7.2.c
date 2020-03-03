/* C template made by Seol*/
#include <stdio.h>

int main()
{

	/*
	 * 1. Introduce getchar(), putchar()
	 * 2. Use while loop to process character sequences
	 * 3. Filter a specific character
	 * 4. Convert numbers to asterisks
	 * 5. Lower characters to Upper characters
	 */

	char ch;

	ch = getchar(); // Get one character
//	putchar(ch); 
	
	while (ch != '\n')
	{
		putchar(ch);

		ch = getchar();
	}

	putchar(ch);

	return 0;
}
