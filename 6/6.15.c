//중첩된 루프
#include <stdio.h>

#define NUM_ROWS 5
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'


int loop_two()
{
	int r;
	int c;
	int col = 10;
	for (r = 1; r< col; r++)
	{
		for(c=FIRST_CHAR; c<FIRST_CHAR + r; ++c)
			{
				printf("%c", c);
			}
		printf("%d", r);
		printf("\n");
	}
	return 0;
}


int loop_three()
{
	int r;
	int c;

	for (r = 0; r < NUM_ROWS; ++r)
	{
		for (c = FIRST_CHAR + r ; c < FIRST_CHAR + NUM_ROWS; ++c)
		{
			printf("%c ", c);
		}
		printf("\n");
	}
	return 0;
}


int main()
{
	int r;
	int c;

	for (r = 0; r < NUM_ROWS; ++r)
	{
		for (c = FIRST_CHAR ; c <= LAST_CHAR;  ++c)
			printf("%c ", c);
		printf("\n");
	}


	printf("\n\n\n\n");

	loop_two();

	printf("\n\n\n");
	loop_three();
	return 0;
}

