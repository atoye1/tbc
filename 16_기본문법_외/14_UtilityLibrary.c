
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* rand(), srand(), malloc(), free() */

void goodbye(void)
{
	printf("Good bye\n");
}

void thankyou(void)
{
	printf("Thank you\n");
}

int main()
{
	printf("Purchased?\n");
	if (getchar() == 'y')
		atexit(thankyou); // 프로그램 종료시 호출하는 함수로 인수를 등록
	while (getchar() != '\n') {};

	printf("Goodbye message ?\n");
	if (getchar() == 'y')
		atexit(goodbye);

	//최근에는 프로그램의 작동방식을 동적으로 결정하도록 프로그래밍하는 추세임

	return 0;
}
