//진입조건 루프
#include <stdio.h>

int main()
{
	int i;

	//i = 1;
	//while (i < 5)
	//	printf("Hi!\n");

	i = 1;
 while (scanf("%d", &i) == 1);
	{
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n", i);
	}
	return 0;
}

