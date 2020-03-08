// while 반복 루프에서 scanf 함수의 사용법
#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;
	//int status;

	printf("Enter an integer (q to quit) : ");
	//status = scanf("%d", &num);
// scanf 함수의 반환값은 입력받은 변수의 개수이다.
// 만약에 숫자가 아닌 문자가 입력값이라면, 정수가 입력값이 아니므로
// 입력받은 개수가 0이므로 status에 0이 들어간다.
	while (scanf("%d", &num) == 1)
	{
		sum = sum + num;

		printf("Enter next integer (q to quit) : ");
		//status = scanf("%d", &num);
		
	}
	printf("Sum = %d\n", sum);

	return 0;
}


