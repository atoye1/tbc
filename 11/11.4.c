// 문자열을 입ㄹ력받는 다양한 방법들
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define STRLEN 81

char* custom_string_input(char* st, int n);

int main()
{
	/* Creating Space */

//	char name[123];
//	int result = scanf("%s", name);
//	puts(name);
//	printf("%d", result);

	// scanf() vs gets() -> gets can read one line
	
	//char words[5] = "";
	////fgets(words, sizeof(words), stdin);
	//gets(words);

	//printf("Start\n");
	//printf("%s", words);
	//puts(words);
	//puts("END.");
	//
	//char words[STRLEN] = "";
	//fgets(words, STRLEN, stdin);

	//for (int i = 0; i <sizeof(words); i++)
	//{
	//	if (words[i] == '\n') words[i] = '\0';
	//}
	//for (int i =0; i< 6; i++)
	//	printf("%d ", words[i]);

	//fputs(words, stdout);
	//fputs("END", stdout);
	
//	char small_array[5];
//	puts("Enter long strings:");
//	//fgets(small_array, 5, stdin);
//	printf("%p\n", small_array);
//	printf("%p\n", fgets(small_array, 5, stdin));
//	fputs(small_array, stdout);

//	char small_array[5];
//	puts("Enter long strings:");
//	while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
//		fputs(small_array, stdout);
//
	char str1[6], str2[6];
	//int count = scanf("%5s %5s", str1, str2);
	//int count = scanf("%6s %6s", str1, str2);
	int count = scanf_s("%5s %5s", str1, 6, str2, 6);
	printf("%s|%s \n", str1, str2);

	return 0;
}

char* custom_string_input(char* st, int n)
{
	char* ret_ptr;
	int i = 0;

	ret_ptr = fgets(st, n, stdin);
	if (ret_ptr)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_ptr;
}

