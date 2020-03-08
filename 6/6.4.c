//관계연산자
#include <stdio.h>
#include <math.h> //fabs()

int main()
{
	/*
	 * Relational Operators
	 * <	is less than
	 * <=	is less than or equal to
	 * ==	is equal to
	 * >=	is greater than or equal to
	 * >	is greater than
	 * != 	is not equal to
	 */
	int n = 0;
	while (++n < 5)
		printf("%d ", n);
	printf("\n");

	char c = 'A';
	while (c != 'Z')
		printf("%c ", c++);


	const double PI = 3.14159264983890723498230912321;
	double guess = 0.0;

	printf("\nInput pi : ");
	scanf("%lf", &guess);
	//while (guess != PI)
	while (fabs(guess - PI) > 0.01)
		{
			printf("Fool! Try agian.\n");
			scanf("%lf", &guess);
		}

	printf("Good!");

	return 0;
}

	 
