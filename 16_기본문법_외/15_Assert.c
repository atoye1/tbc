
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int divide(int a, int b);

int main()
{
	int a, b;
	int f = scanf("%d%d", &a, &b);

	printf("a / b = %d", divide(a, b));

	return 0;
}

int divide(int a, int b)
{
	assert(b != 0); //VS의 release모드에서는 assert를 빌드시 포함시키지 않는다.
	//있어서는 안된 일에대해서는 assert를 걸어두면 추후에 디버깅 및 유지보수에 편리
	
	// if (b== 0){
	// 	printf("can't divide\n");
	// 	exit(1);
	// 	}
	// 	위와 같이 작성하는 것은 오버헤드를 발생시켜 성능저하를 유발
	return a / b;
}
