#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char* filename, const struct book* books, int n);
struct book* read_books(const char* filename, int* n);
void read_books2(const char* filename, const struct book** book_dptr, int* n);

int main()
{
	int temp;
	int n =3;
	struct book* my_books = (struct book*)malloc(sizeof(struct book) * n);

	if (!my_books) {
		printf("Malloc Failed.\n");
		exit(1);
	}

	my_books[0] = (struct book){"book1 title", "book1 author"};
	my_books[1] = (struct book){"book2 title", "book2 author"};
	my_books[2] = (struct book){"book3 title", "book3 author"};

	print_books(my_books, n);

	printf("\nWriting to a file.\n");
	write_books("books11.txt", my_books, n);
	free(my_books);
	n = 0;
	printf("Writing Job Done.\n");

	printf("\nPress enter key to read data from a file.\n\n");
	temp = getchar();

	my_books =read_books("books11.txt", &n);
	print_books(my_books, n);

	return 0;
}

struct book* read_books(const char * filename, int* n_ptr)
{
	FILE *fp = fopen(filename, "rt");

	if (fp == NULL)
	{
		fputs("Can't open file.", stderr);
		exit(1);
	}

	int flag;
	flag = fscanf(fp, "%d%*c", n_ptr);
	if (flag != 1)
	{
		printf("File read failed");
		exit(1);
	}

	struct book* books = (struct book*)calloc(sizeof(struct book), *n_ptr);

	if (!books)
	{
		printf("Malloc() failed");
		exit(1);
	}

	for (int i = 0; i < *n_ptr; i++)
	{
		flag = fscanf(fp, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

		if (flag != 2)
		{
			printf("File read failed.");
			exit(1);
		}
	}

	fclose(fp);


	return books;
}
			

void write_books(const char* filename, const struct book* books, int n)
{
	FILE *fp = fopen(filename, "wt");
	fprintf(fp, "%d\n", n);
	for (int i = 0; i < n; i++)
	{
		fprintf(fp,"%s\n%s\n", books[i].name, books[i].author);
	}
	

	fclose(fp);
}

void print_books(const struct book* books, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Title : %s, Author: %s", books[i].name, books[i].author);
		printf("\n");
	}
}

