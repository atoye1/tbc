#include <stdio.h>

int main()
{
	/* promotions in assignments */
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;


	/* demtion in assignments */
	d = 1.25;
	f = 1.25;
	f = 1.123;

	/*ranking of types in operations 
	 *long double > double > float
	 *실수가 정수보다 랭킹이 높으므로,
	 정수와 실수를 더하면 실수로 반환된다./
	 *unsigend long long , long long
	 *unsigned long
	 *unsigned, int
	 *short int, unsigined short int
	 *signed char, char, unsigned char
	 *_Bool
	 */

	d = f + 1.234; // float + double -> double +double
	f = f + 1.234;
	 
	
	// automatic promotion of function arguments
	
	/* casting operators */
	d = (double)3.14f;
	i = 1.6 + 1.7;
	printf("%d\n", i);
	i = (int)1.6 + (int)1.7;
	printf("%i", i);

	printf("\nNow printing more examples\n");

	char c;
	f = i = c = 'A'; // 65
	printf("%c %d %f\n", c, i, f);
	printf("\nNow printing more examples\n");
	c = c + 2;
	i = f + 2 * c; // 65 + 134
	printf("%c %d %f\n", c, i, f); // 67, 199, 65.0000

	printf("\nNow printing more examples\n");
	c = 1106; // demolition,
	printf("%c\n", c);
	c = 83.99;
	printf("%d\n",c);
	return 0;


}

