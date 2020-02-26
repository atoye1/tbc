// while 반복 루프에서 scanf 함수의 사용법
#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	printf("Enter an interger (q to quit) : ");
	

	// scanf 함수의 return은 입력받은 정수의 개수
	// 정상입력이라면, 1이 저장된다(정수로 입력받지 않았으므로)
	while (scanf("%d", &num) == 1) // equality operator
	{
		sum = sum + num;

		printf("Ener next integer(q to quit): ");
	}
	printf("Sum = %d\n", sum);
	
	//TODO: C-style shortcut
	
	
	return 0;
}
