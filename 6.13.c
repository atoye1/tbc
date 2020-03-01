//비밀번호 맞추는 게임
#include <stdio.h>

int main()
{
	const int secret_code = 337;
	int guess;
	
	printf("Enter Secret_code : ");
	scanf("%d", &guess);


	do
	{
		printf("Enter secret code : ");
		scanf("%d", &guess);
	}
	while (guess != secret_code);

	printf("Good!");

	return 0;
}

