/* C template made by Seol*/
#include <stdio.h>

int main()
{
	int number;

	printf("Input a positive integer : ");
	scanf ("%d",&number);

	if (number % 2 == 0)
		printf("Even");
	else
		printf("odd");
	return 0;
}
