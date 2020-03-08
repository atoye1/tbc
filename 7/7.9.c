/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()

{

	int temp;
	temp = true ? 1024 : 7; //ternary operator
	printf("%d\n", temp);

	temp = false ? 1024 : 7;
	printf("%d\n", temp);

	int number;
	scanf("%d", &number);

	//bool msg;

	//msg = number % 2 == 0 ? true : false;

	const bool msg = (number % 2 == 0) ? true : false;

	if (msg)
		printf("Even");
	else
		printf("Odd");

	int a = 1, b = 2;
	int max = (a > b) ? a : b;

	printf("%d", max);
	
	//bool is_even = ( number % 2 == 0) ? printf("even"): printf("Odd");
	return 0;
}
