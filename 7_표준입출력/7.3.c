
/* C template made by Seol*/
#include <stdio.h>
#include <ctype.h>

/*reference link
 * https://www.tutorialspoint.com/c_standard_library/ctypes_h.html
*/

int main()
{
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		if ( islower(ch))
			ch = toupper(ch);
		else if ( isupper(ch) )
			ch = tolower(ch);
		if (isdigit(ch))
			ch = '*';

		putchar(ch);
	}

	putchar(ch);

	return 0;
}
