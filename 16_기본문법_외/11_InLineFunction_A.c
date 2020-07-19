
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "inline.h" //inline함수는 기본적으로 헤더파일에 포함시켜 사용한다.

/*
	Function call has overhead
	- set up the call, pass argument, jump to the function code, and return

	Inline function specifier
	- Suggests inline replacements.

	Inline function should be short.
	- A function with internal linkage can be made inline. (GCC, clang)
	You can't take its address.
*/

inline static int fool() // External Func이므로 static을 붙여서 인터널 링키지로 만들어줘야한다
{			// static이 없을시 VS이외에서 컴파일 오류남
	return 5;
}

int main()
{
	int ret = 0;

	for (int i = 0; i < 100; ++i)
	{
		int sum = foo();
		ret += sum;
		printf("%d ", ret);
	}
	printf("\n");

	printf("output is : %d\n", ret);

	return 0;
}
