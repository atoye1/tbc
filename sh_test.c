#include <stdio.h>

int main()
{
	float won = 0;
	float dollar = 0;

	printf("Input won\n");
	scanf("%f", &won);

	dollar = won * 0.00089f;

	printf("Dollar = %f\n", dollar);

	return 0;
}
