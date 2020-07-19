//#pragma once // 헤더가드 

#ifndef __MY_FUNCTIONS__ // 헤더가드 중복으로 include를 방지
#define __MY_FUNCTIONS__

#include "my_functions.h"

extern int status;

static int si = 0; //becomes file scope
// include를 한 파일 안에서 사용할수 있다.

extern int add(int a, int b);
//함수는 기본적으로 extern으로 설정된다.
// extern 은 외부에 있는 변수나 함수를 사용하겠다는 의미

static int multiply(int a, int b)
{
	return a* b;
}
// static으로 정의하면 body를 줄 수 있다

//int subtract(int a, int b)
inline int subtract (int a, int b)
{
	return a - b;
}

void print_status();
void print_address();

#endif
