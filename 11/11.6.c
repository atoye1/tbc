/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void fit_str(char*, unsigned int);
char my_strcat(char*, char*);
int my_strcmp(char*, char*);

int main()
{

	//char msg[] = "mymy";
	//puts(msg);
	//printf("Length %d\n", strlen(msg));

	//fit_str(msg, 8);
	//puts(msg);
	

	char str1[100] = "First string";
	char str2[] = "Second string12345678901234567890";

	//strcat(str1, ", ");
	//strcat(str1, str2);
	//puts(str1);

//	strncat(str1, str2, 2);
//	puts(str1);
//	printf("%s", str1);

	//my_strcat(str1, str2);
	//puts(str1);

//	printf("%d\n", my_strcmp("A", "A"));
//	printf("%d\n", my_strcmp("Hello", "Helkos"));


	char dest[100] = "";
	char source[] = "Start programming!";
	//dest = source;
	strcpy(dest, source);
	printf("%s\n", dest);
	

	return 0;
}

int my_strcmp(char* str1, char*str2)
{
	while(*str1 && *str2)
	{
		printf("%c %c\n", *str1, *str2);
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			continue;
		}
		else if (*str1 > *str2) return 1;
		else if (*str1 < *str2) return -1;
	}
	return 0;
}


void fit_str(char* str, unsigned int size)
{
	if (strlen(str) > size)
		str[size] = '\0';
}
	

char my_strcat(char* str1, char*str2)
{
	char* ptr = str1 + strlen(str1) - strlen(str1)+1;
	printf("%p\n", str1);
	printf("%d\n", strlen(str1));
	printf("%c, %p\n",*ptr, ptr);
	while (*str2 != '\0')
		*ptr++ = *str2++;
	*ptr = '\0';

	return *str1;

}
	

	
