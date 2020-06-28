
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int ch;
	FILE *fr;
	FILE *fw;

	unsigned long count = 0;

	if (argc !=2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fr = fopen(argv[1], "r")) == NULL) // open text file for reading
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fw = fopen("copy.txt", "w")) == NULL)
	{
		printf("Can't open copy.txt file");
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fr)) != EOF)
	{
		// putc(ch, stdout); // same as putchar(ch);
		fputc(ch, stdout);
		fputc(ch, fw);

		count++;
	}

	fclose(fr);
	fclose(fw);

	printf("FILE %s has %lu characters\n", argv[1], count);

	return 0;
}
