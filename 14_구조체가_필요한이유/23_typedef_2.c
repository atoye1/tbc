
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char char3[3] = { 'A', 'B', 'C'};

char (*complicated_function1())[3] // Function returns pointer to char[3]
// 3개짜리 어레이의 포인터를 리턴해주는 함수임
{
	return &char3;
}

typedef char(*FRPTC3())[3];
typedef char(*(*PTFRPTC3)())[3];

char(*(*fptr1)())[3] = complicated_function1;

FRPTC3 *fptr2 = complicated_function1;
PTFRPTC3 fptr3 = complicated_function1;

typedef char c3[3]; // c3라는 자료형이 char 3개처럼 정의된다

c3* complicated_function2()
{
	return &char3;
}

int main()
{
	char(*ret_val)[3] = fptr1();

	printf("%c %c %c\n", (*ret_val)[0], (*ret_val)[1], (*ret_val)[2]);

	c3 *my_c3 = fptr2();
	printf("%c %c %c\n", (*my_c3)[0], (*my_c3)[1], (*my_c3)[2]);

	return 0;
}

