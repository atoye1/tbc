#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	//unsigned int i = 0;

	//printf("%lu\n", sizeof(unsigned int)); // 연산자로 분류됨 
	//printf("%ld", sizeof(i)); 4byte -> 32 digits of bit(binary)

	//unsigned int i = 0b11111111111111111111111111111111;
	unsigned int u_max = UINT_MAX + 1;

	printf("u_max + 1 is %u\n", u_max);
	
	char buffer[33];
	snprintf(u_max, buffer, 2);
	printf("binary: %s\n", buffer);
	//unsigned int u_min = 0;
	//signed int i_max = INT_MAX;
	//signed int i_min = INT_MIN;

//	printf("max of uint = %u\n", u_max);
//	printf("max of int = %d\n", i_max);
//	printf("min of uint = %u\n", u_min);
//	printf("min of int = %d\n", i_min);
	//printf("%u\n", u);
	//printf("MULTIPLE COMMAND INPUT\n");

	return 0;
}
