// 루프 안에서 함수의 반환값 사용하기
#include <stdio.h>

int compute_pow(int base, int exp)
{
	int result = 1;	
	for (int i = 0; i < exp; ++i)
	{
	result *= base ;
	//printf("%d\n", result);
	}
	return result;
}
int main()
{
	int base, exp;
	int result;

	while (scanf("%d %d", &base, &exp) == 2)
	{
		result = compute_pow(base, exp);
		printf("REsult = %d\n", result);
	}
	return 0;
}
