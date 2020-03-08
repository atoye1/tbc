//배열과 런타임 에러
//같은 데이터 형을 덩어리형으로 만드는 배열
//접근할때 매우 편하다.

#include <stdio.h>

#define NUM_DAYS 365

int main()
{
	char my_chairs[] = "Hello, World!";

	int daily_temperature[NUM_DAYS];
	double stock_prices_histroy[NUM_DAYS];

	printf("%zd\n", sizeof(stock_prices_histroy));
	printf("%zd\n", sizeof(double) * NUM_DAYS);
	printf("%zd\n", sizeof(stock_prices_histroy[0]));
	printf("%zd\n", sizeof(daily_temperature[0]));
	
	int my_numbers[5];

	my_numbers[0] = 1; // subscripts. indices, offsets
	my_numbers[1] = 3;
	my_numbers[2] = 4;
	my_numbers[3] = 2;
	my_numbers[4] = 1024;

	//scanf("%d", &my_numbers[0]); is same as below
	scanf("%d", my_numbers);

	printf("%d\n", my_numbers[0]);
	printf("%d\n", my_numbers[1]);
	printf("%d\n", my_numbers[2]);
	printf("%d\n", my_numbers[3]);
	printf("%d\n", my_numbers[4]);


	my_numbers[5] = 99999; //out of bound runtime error
	// runtime error - > compile에는 문제없고, 실행시에 나타나는 에러
	printf("%d", my_numbers[5]);


	return 0;
}


