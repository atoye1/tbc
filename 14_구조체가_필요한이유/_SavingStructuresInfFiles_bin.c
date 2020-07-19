/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book *books, int n);
void write_books(const char* filename, const struct book* books, int n);
struct book* read_books(const char* filename, int *n);
void read_books2(const char* filename, struct book** books_dptr, int* n);

int main()
{
	int temp;
	int n = 3;

	struct book *my_books = (struct book*)malloc(sizeof(struct book) * 3);

	if (!my_books) {
		printf("Malloc Failed");
		exit(1);
	}

	my_books[0] = (struct book){"The Great Gatsby", "F. Scott Fitzgerald"};
	my_books[1] = (struct book){"Hamlet", "William Shakespeare"};
	my_books[2] = (struct book){"The Odyssey", "Homer"};

	print_books(my_books, 3);

	printf("\nWriting to a file.\n");
	write_books("my_books.txt", my_books, n);
	free(my_books);
	n = 0;
	printf("Done.\n");

	printf("\nPress any key to read data from a file. \n\n");
	scanf("%d", &temp);

	my_books = read_books("my_books.txt", &n);
	//read_books2("books.txt", &my_books, &n);
	print_books(my_books, n);
	free(my_books);
	n = 0;

	return 0;
}

struct book* read_books(const char *filename, int *n_ptr)
{
	FILE *file = fopen(filename, "rt");

	if (file == NULL)
	{
		fputs("Can't open file.", stderr);
		exit(1);
	}

	int flag;
	flag = fscanf(file, "%d%*c", n_ptr); // Remove last \n *는 읽어들이는걸 버리는 뜻 마지막의 개행문자 제거
	if (flag != 1)
	{
		printf("File read failed");
		exit(1);
	}

	struct book *books = (struct book*)calloc(sizeof(struct book), *n_ptr);

	if(!books) {
		printf("Malloc() failed.");
		exit(1);
	}

	for (int i = 0; i < *n_ptr; ++i)
	{
		flag = fscanf(file, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);

		if (flag != 2)
		{
			printf("file read failed");
			exit(1);
		}
	}
	fclose(file);

	return books;
}



void print_books(const struct book *books, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Book %d --> Title: %s, Author: %s", i+1, books[i].name, books[i].author);
		printf("\n");
	}
}

void write_books(const char* filename, const struct book* books, int n)
{
	FILE *fp = fopen(filename, "wt");

	fprintf(fp, "%d\n", n);

	for (int i = 0; i < n; i++)
		fprintf(fp,"%s\n%s\n",books[i].name, books[i].author);

	fclose(fp);
}
