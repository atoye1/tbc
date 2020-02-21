#include <stdio.h>
#include <stdint.h> // also included in inttypes.h
#include <inttypes.h> // lets use various data-type

int main()
{
	int i;			// normal 16bit integer
	int32_t i32;		// 32 bit integer 어떤 시스템에서도 32bit int 
	int_least8_t i8;	// smallest 8 bit
	int_fast8_t f8;		// fastest minimum
	intmax_t imax;		// biggest signed integers
	uintmax_t uimax;        // biggest unsigned integers

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);

	return 0;
}

