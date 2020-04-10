
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int students[300];
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 학생 점수 : ", i + 1);
		scanf("%d", &students[i]);
	}

	return 0;
}
