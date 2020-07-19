
//함수 포인터의 배열을 사용하는 연습문제
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void update_string(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}
void ToUpper(char* str)
{
	update_string(str, toupper);
}
void ToLower(char* str)
{
	update_string(str, tolower);
}

void Transpose(char* str) //TODO add a new menu;
{
	while(*str)
	{
		if (islower(*str))
			*str=toupper(*str);
		else if (isupper(*str))
			*str=tolower(*str);
		str++;
	}
}

int main()
{
	char options[] = { 'u', 'l', 't'}; //TODO add a new menu;
	int n = sizeof(options)/sizeof(char);

	typedef void (*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper, ToLower, Transpose}; // TODO add a new menu
	// 함수 포인터의 배열이 들어가 있는 연습문제
	
	printf("Enter a string\n>> ");

	char input[100];
	while (scanf("%[^\n]%*c", input) != 1)
		printf("Please try again.\n>> ");
	printf("\nYour input is\n>> %s\n", input);

	while (1)
	{
	//	char c;
	//	scanf("%c", &c);
	//	if (c == 'u')
	//	{
	//		printf("TOUPPER\n");
	//		ToUpper(input);
	//		printf("%s\n", input);
	//		break;
	//	}
	//	else if (c == 'l')
	//	{
	//		printf("TOLOWER\n");
	//		ToLower(input);
	//		printf("%s\n", input);
	//		break;
	//	}
	//	else
	//	{
	//		printf("Wrong choice, try again \n\n");
	//		while (getchar() != '\n')
	//			continue;
	//	}
		printf("Choose an option:\n");
		printf("u) to upper\n");
		printf("l) to lower\n");
		printf("t) to transpose\n");

		char c;

		while (scanf("%[^\n]%*c", &c) != 1)
			printf("Please try again\n");

		bool found = false;

		for (int i = 0; i < n; i++)
		{
			if (options[i] == c)
			{
				(*(operations[i]))(input);
				found = true;
				break;
			}
		}

		if (found)
			break;
		else
			printf("Wrong input try again.\n");
	}
	printf("%s\n", input);

	return 0;
}

