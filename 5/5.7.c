#include <stdio.h>

int main()
{
	//int seconds = 0, minutes =0 , hours = 0 ;
	//while (seconds >= 0)
	//{
	//printf("Input secondes : ");
	//scanf("%d", &seconds);

	//if (seconds < 0)
	//{
	//	return 0;
	//}

	//		
	////TODO: seconds -> hours, minutes, seconds
	//hours = seconds / 3600;
	//minutes = seconds / 60;
	//seconds = seconds % 60;
	//
	//printf("h: %d, m: %d, s: %d\n", hours, minutes, seconds);

	//}
	int div, mod;

	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);

	div = 11 / -5;
	mod = 11 % -5;
	
	printf("div = %d, mod= %d\n", div, mod);
	div = -11 / -5;
	mod = -11 % -5; printf("div = %d, mod= %d\n", div, mod);

	div = 11 / -5;
	mod = -11 % 5;
	printf("앞의 연산자 부호가 - 일때 나머지도 -가 나온다 : div = %d, mod= %d\n", div, mod);


	return 0;
}


