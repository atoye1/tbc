
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* variable scopes(visibility)
 * -block, functions, functions prototpe, file.
 */

int g_i = 123; // global_variables -> filescope
int g_j; // global_variables -> filescope


void func1()
{
	g_i++;
}

void func2()
{
	g_i +=2;
}

int main()
{
	int local = 1234;
	
	func1();
	func2();

	printf("%d\n", g_i);
	printf("%d\n", g_j);//Not initialized?
	//초기화되지 않은 전역,정적변수는 BSS의 메모리 segment에 저장이되고
	// 0으로 한꺼번에 초기화된 상태로 프로그램을 실행한다.

	return 0;
}
