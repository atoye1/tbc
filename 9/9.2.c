
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WIDTH 50
#define NAME "Dong-Hun Seol"
#define ADDRESS "Seoul, Korea, busan"

void print_multiple_chars(char c, int n_stars, bool endl);
void print_centered_string(char str[]);

int main()
{
	int n_blanks = 0;

	print_multiple_chars('*', WIDTH, true);
	print_centered_string(NAME);
	print_centered_string(ADDRESS);
	print_centered_string("I Love You");
	print_multiple_chars('*', WIDTH, true);

	return 0;
}

void print_multiple_chars(char c, int n_stars, bool endl)
{
	for (int i = 0; i < n_stars; ++i)
		printf("%c", c);
	if (endl)
		printf("\n");
}

void print_centered_string(char str[])
{
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(str)) /2;
	print_multiple_chars(' ', n_blanks, false);
	printf("%s\n", str);
}
