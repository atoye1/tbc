
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31

int main()
{
	FILE *fp;
	char words[MAX] = {'\0', };
	
	const char* filename = "record";

	if ((fp = fopen(filename, "r+")) == NULL)
	{
		fprintf(stderr, "Cant' open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	//while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.'))
		//fprintf(fp, "%s\n", words); // FilePointer에 입력값을 저장하는 코드

	while (((fgets(words, MAX, stdin) != NULL)) && (words[0] != '.'))
		fputs(words, fp);

	rewind(fp); // go back to begiing of file

	while (fscanf(fp,"%s", words) == 1)
		fprintf(stdout, "%s\n", words);

	if (fclose(fp) != 0)
		fprintf(stderr, "Error Closing File\n");
	

	return 0;
}
