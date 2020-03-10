
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // exit() func included here.


int main()
{
	int c;
	int loop = 0;
	FILE *file = NULL; // *means pointer variable 
	// 포인터변수에 스트림을 저장하는 정보를 담을 수 있다.
	char *file_name;//[] = "my_file.txt";//TODO: use scanf

	scanf("%s",&file_name);
	printf("%s", file_name);
	file = fopen(file_name, "r"); //파일을 여는 통로
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(1);
	}

	while ((c=getc(file)) != EOF)
	{	loop++;
		putchar(c);
	}
	fclose(file);
	printf("%d", loop);


	return 0;
}
