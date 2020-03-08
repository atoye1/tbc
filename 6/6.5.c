// 사실과 거짓
#include <stdio.h>

int main()
{
	int tv, fv;
	tv = (1 < 2);
	fv = (1 > 2);

	printf("True is %d\n", tv);
	printf("False is %d\n", fv);


	int i = -5;
	while (i)
		printf("%d is true\n", i++);
	printf("%d is false\n", i);

	int j = 5;
	while (j)
		printf("%d is true\n", j--);
	printf("%d is false\n", j);
	return 0;
}

	
