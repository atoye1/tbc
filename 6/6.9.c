//For 는 유연해요!
#include <stdio.h>
int main()
{
	/*
	 * for (initialize; test; update)
	 * 	statement
	 */
	for (int i = 3; i > 0; i--)
		printf("%d ", i);
	//initialize -> update -> test -> update -> initialize
	
	for (int i=0; i < 100; i = i+8)
		printf("%d ", i);
	
	for (char c= 'A'; c <='Z'; c++)
		printf("%c ", c);
	printf("\n");

	for (int x = 1, y =5; y <=20; y = (++x * 3) + 10)
		printf("%d ", x);

	int x = 0;
	for(printf("Let's go!\n"); x!=7; scanf("%d", &x))
		;
	return 0;
}
