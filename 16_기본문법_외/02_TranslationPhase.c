
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* Program Written in C
	 
	 * 1. Translating
	 * 2. Preprocessing
	 * 3. Compiling
	 * 4. Linking
	 
	 * -->  Executable
	 */

	// International characters

	puts("안녕하세요? 한글을 사랑합니다.\n");

	// Trigraph Sequences - for old keyboards.
	// ex ??= is #, ??/ is \, ??< is {
	//int arr[3] = { 1, 2, 3};
	//printf("arr??(0??) == %d\n", arr??(0??));
	//printf("arr[0] == %d\n", arr[0]);
	//Use gcc % -trigraphs
	

	// Digraphs
	// Digraphs doesn't work inside of " "
	

	// Two physical lines vs one logical line
	printf("This is ver ver ver ver ver vervdfsadslkdfj;sldjflskdjflksdjfljdsf added back slash\
 long line.\n"); // physically two lines logically one line.

	/*
	 Tokens
	 Groups separated from each other by spaces, tabs, or line breaks
	 Whitespace characters -> a single space
	 주석을 빈킨하나로 치환한다.
	*/
	
	int/*a variable to count a number*/n = 1;
	printf("%d\n", n);
	// as same as int n = 1;

	return 0;
}
