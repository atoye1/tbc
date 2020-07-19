
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  Generic selection expression
  - Generic programming : code is not specific to a particular type
  - Not supported on VS // C++에 대해서는 비주얼 스튜디오가 지원 해주지만 C는 미약
  - Generic : 일반적인? X ->	코드가 특정한 자료형에 국한되서 돌아가지 않고,
  - 				일반적인 여러가지 자료형 각각에 대해서 작동하게 작성하는것
  				C++의 Template programming와 연관

_Generic : C11 keyword
*/

#define MYTYPE(X) _Generic((X), \
	int : (X + 123), \
	int* : "int*", \
	float : "float", \
	double : "double", \
	default : "other"\
)
int main()
{
	int d = 5;

	printf("%d\n", MYTYPE(d));
	printf("%s\n", MYTYPE(2.0*d));
	printf("%s\n", MYTYPE(3L));
	printf("%s\n", MYTYPE(&d));

	return 0;
}
