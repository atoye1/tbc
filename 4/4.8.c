// modifier of formatter
//
// flags, width .precision, length
//
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %i\n", 123, -123);
	printf("%0*i\n", 10, 12345);
//	printf();
//	printf();
//	printf();
//	printf();
//	printf();
//	printf();
//	printf();

	return 0;
}
