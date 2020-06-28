
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	int ch;

	/* ungetc() */
	fp = fopen("input.txt", "r");

	ch = fgetc(fp);
	fputc(ch, stdout);

	ungetc(ch, fp); // try another characters

	ch = fgetc(fp);
	fputc(ch, stdout);


	ch = fgetc(fp);
	fputc(ch, stdout);

	fclose(fp);
	printf("\n");

	//setvbuf()
	
	fp = fopen("input.txt", "r");

	char buffer[32] = { '\0', };

	setvbuf(fp, buffer, _IOFBF, sizeof(buffer));

	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%d", buffer[i]);
	printf("\n");
	
	ch = fgetc(fp); // Read just only a single character!
	
	//시스템의 효율성을 위해서 한글자만 읽더라도 버퍼는 채워져 있는 경우가 있다.
	//버퍼를 채운 후 한글자나 두글자를 꺼내는게 속도면에서 효율적이기 때문이다.
	//버퍼를 채울수 있는 만큼 채우고 거기에서 꺼내는 방식으로 활용한다.
	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%c", buffer[i]);
	printf("\n");

	/* flush */
	//버퍼에 쌓인 내용을 지워버리는 것
	//버퍼가 빌때까지 출력을 다 해버려라. 화면이나 뭐 콘솔에..
	//버퍼에 미처 출력하지 못한 내용이 있을 경우에 fflush 사용하면 해결되는 경우도 있다.
	fflush(fp);
	return 0;
}
