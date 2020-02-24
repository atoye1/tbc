#include <stdio.h>

void draw(int n); //ANSI Fuction prototype declaration

int main()
{
	int i = 5;
	char c = '#'; // 35
	float f = 7.1f;

	draw(i);
	draw(c);
	draw(f);

	return 0;
}


void draw(int n) //ANSI Fuction prototype declaration
{
	while (n-- > 0)
		printf("%i",n);
	printf("\n");
}
