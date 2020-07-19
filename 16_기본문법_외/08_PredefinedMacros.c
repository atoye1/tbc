
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "DifferentFile.h"

void different_function();

int main()
{
	// 실행시간이 아니라 컴파일(or 통틀어서 build)된 시간을 의미한다
	printf("__FILE__ : %s\n", __FILE__);
	printf("__DATE__ : %s\n", __DATE__);
	printf("__TIME__ : %s\n", __TIME__);
	printf("__LINE__ : %d\n", __LINE__);
	printf("__func__ : %s\n", __func__); //함수이름 (main)

	printf("\n\n");

	different_function();
	printf("\n\n");
	different_func_in_different_file();

	printf("\nNot defined in VS\n");
	printf("__STDC__ %d\n", __STDC__);
	printf("__STDC_HOSTED__ %d\n", __STDC_HOSTED__);
	printf("__STDC_VERSIO__ %d\n", __STDC_VERSION__); //현재사용하는 C의 버전

#line 7 //set following line number as 7
	printf("__LINE__ after #line %d\n", __LINE__);
	printf("__LINE__ after #line %d\n", __LINE__);
#line 1 "my_filename.c" // set filename as hello.txt, set linenumber as 1
	printf("__LINE__ after #line %d\n", __LINE__);
	printf("__FILE__ : %s\n", __FILE__);

#if __LINE__ != 4
#error NOT line 4
#endif

#if defined(__linux__) != 1
#error NOT linux platform
#endif

#if __STDC_VERSION__ != 201112
#error NOT C11
#endif

	return 0;
}

void different_function()
{
	printf("This function is %s\n", __func__);
	printf("This is line %d\n", __LINE__);
}
