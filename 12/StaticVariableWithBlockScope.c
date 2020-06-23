
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* count()
{
	int ct = 0;
	printf("count = %d %lld\n", ct, (long long)&ct);
	ct++;

	return &ct;
}

int* static_count()
{
	static int ct = 0; // static 하게 유지되는 메모리영역에 자리잡게된다.
	//초기화가 한번만되어 함수가 재호출되어도 값이 유지된다.
	printf("static count = %d %lld\n", ct, (long long)& ct);
	ct++;

	return &ct;
}


void count_caller()
{
	count();
}

void static_count_caller()
{
	static_count();
}

int main()
{
	count();
	count();
	count_caller();
	
	static_count();
	static_count();
	static_count_caller();
	return 0;
}
