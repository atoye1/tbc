
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct name_count {
	char first[NLEN];
	char last[NLEN];
	int num;
};

void receive_input(struct name_count*);
void count_characters(struct name_count*);
void show_result(const struct name_count*);


char* sgets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);

	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			* find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}

int main()
{
	struct name_count user_name;
	receive_input(&user_name);
	count_characters(&user_name);
	show_result(&user_name);

	return 0;
}

void receive_input(struct name_count* user_name)
{
	int flag;
	printf("Input your first name:\n>> ");
	flag = scanfI"%[^\n]%*c", ptr_nc->first);
