
/* C template made by Seol*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned num;
	bool isPrime;

	scanf("%u", &num);

	/*
	 * TODO: Check if num is a prime number
	 	ex) num is 4, try num % 2, num % 3
		ex) num is 5, try num % 2, num % 3, num % 6
	*/

	isPrime = true;

	for (unsigned i=2; i<num ; ++i)
	{
		if (num % i == 0)
		{
			isPrime = false;
			printf("%u is %u 's yaksu\n", i, num);
		}
	}
	if (isPrime)
		printf("%u is a prime number\n", num);
	else
		printf("not a prime number\n");

	return 0;
}
