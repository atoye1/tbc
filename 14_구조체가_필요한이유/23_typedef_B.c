
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


char char3[3] = { 'A', 'B', 'C'};


//char 3개짜리 어레이에 대한 포인터를 리턴하는 함수
//Function returns pointer to char[3]
char (*complicated_function1())[3]
{
	return &char3;
}

typedef char(*FRPTC3())[3];
typedef char(*(*PTFRTC3))[3];

char(*(*fptr1)())[3] = complicated_function1;

FRPTC3 *fptr2 = complicated_function1;
PTFRTC3 fptr3 = complicated_function1;

//use typedef to make declarations simpler

typedef char c3[3];

c3* complicated_function2()
{
	return &char3;
}

int main()
{
	char(*ret_val)[3] = fptr1();
	c3 *my_c3 = fptr2();
	printf("%c %c %c\n", (*my_c3)[0],(*my_c3)[1],(*my_c3)[2]);


	return 0;
}
