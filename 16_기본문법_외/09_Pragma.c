
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* #pragma once */


//#pragma pack(1) //1바이트로 패딩해라 -> 패딩을 하지 마라 라는 의미
_Pragma("pack(1)"); // vs에서 지원안됨 same as pragma pack(1)

#pragma warning( disable : 4477)
#pragma warning( error : 4477) // warning을 error로 취급해 compile되지 않게 만든다.

struct s {
	int i;
	char ch;
	double d;
};
	
int main()
{
	struct s A;
	printf("The size is %d\n", sizeof(struct s));

	return 0;
}
