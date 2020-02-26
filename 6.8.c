// For Loop 소개
#include <stdio.h>

int main()
{
	int i;
	i = 1;

	while(i <= 10)
	{
		printf("%d\n", i);
		i++;
	}

	//int j;
// counter initiation, Counter check, counter change
	for(int j = 1; j <=10; j+=2) 
	{
		printf("%d ", j);
	}

	return 0;
}

