
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SLEN 81

struct namect{
	char* fname;
	char* lname;
	int letters;
};

void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(const struct namect*);
void cleanup(struct namect*);
char* s_gets(char* st, int n);

int main()
{
	struct namect person;
	
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
//	cleanup(&person);

	return 0;
}

void getinfo(struct namect* person)
{
	int flag;
	char temp[SLEN] = { 0, };

	printf("Please enter your first name.\n");
	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("wrong input");
	else
	person->fname = malloc(SLEN);

	person->lname = malloc(SLEN);
}

void makeinfo(struct namect* person)
{
	printf("Input first name\n>> ");
	scanf("%[^\n]%*c", person->fname);
	printf("Input last name\n>> ");
	scanf("%[^\n]%*c", person->lname);
	person->letters = strlen(person->fname) + strlen(person->lname);
};

void showinfo(const struct namect* person)
{
	printf("%s %s, your name is %dletters long", person->fname, person->lname, person->letters);
}

void cleanup(struct namect* person)
{
	free(person->fname);
	free(person->lname);
}

