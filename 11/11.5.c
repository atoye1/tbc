
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TEST "A string from #define"

void custom_put(const char* str); // Only two lines
int custom_put2(const char* str); // Add \n, return # of characters

int main()
{

	// puts(): add \n at the end
	//
	//char str[60] = "String array initialized";
	//const char* ptr = "A pointer initialized";

	//puts("String without \\n");
	//puts("END");
	//puts(TEST);
	//puts(TEST + 5);
	//puts(&str[3]);
	//puts(ptr + 3);


	//char str1[] = { 'H', 'I', '!'}; // no \0 at the end.
	//puts(str1);
	
	//char line[100];
	//while (gets(line))
	//	puts(line);
	
	//char line1[100];
	//while (fgets(line1, 2, stdin))
	//	fputs(line1, stdout);

	//char input[100] = "";
	//int ret = scanf("%2s", input);
	//printf("%s\n", input);
	//ret = scanf("%2s", input);
	//printf("%s\n", input);

	custom_put("my string\n");
	custom_put2("my string");
	return 0;
}

void custom_put(const char* str)
{
	while (*str!='\0')
		putchar(*str++);
}

int custom_put2(const char* str)
{
	int count = 0;
	while (*str)
	{
		putchar(*str++);
		count++;
	}
	putchar('\n');

	return count;
}
