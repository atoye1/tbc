
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MESSAGE "A symbolic string constant"
#define MAXLENGTH 81

int main()
{
	char words[MAXLENGTH] = "A string in a array";
	const char* pt1 = "A pointer to a string.";

	puts("Puts() adds a newline at the end:");
	puts(MESSAGE);
	puts(words);
	puts(pt1);
	words[3] = 'p';
	puts(words);
	//pt1[8] = 'A';
	
	char greeting[50] = "Hello, and""How are" "you"
		" today!";
	puts(greeting);

	printf("\" To be, or not to be\" Hamlet said.\n");

	printf("%s, %p, %p\n", "We", "are", *"excellent programmer.");

	const char m1[15] = "Love you!";

	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]);
	printf("\n");

	const char m2[15] = {'l','o','v','e',' ','y','o','u'};
	const char m3[] = "Love you, too!";

	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m3[i]);
	printf("\n");

	int n = 8;
	char cookies[1] = { 'A', };
	char cakes[ 2 + 5 ] = { 'A', };
	char pies[ 2 * sizeof(long double) + 1] = { 'A', };

	char truth[10] = "Truth is ";
	if (truth == &truth[0]) puts("true!");
	if (*truth == 'T') puts("true!");
	if (*(truth+1) == truth[1]) puts("true!");
	if (truth[1] =='r') puts("true!");

	return 0;
}
