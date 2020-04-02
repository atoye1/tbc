// 메모리 레이아웃과 문자열
/* C template made by Seol*
 * 스택: 미리 크기를 알 수 있는 데이터
 * 힙 : 미리 크기를 알 수 없는 데이터
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void test_function()
{
	int j;
	printf("Stack high \t%llu\n", (unsigned long long)&j);
}

int main()
{
	// Array vs Pointer
	const char* pt2 = "I am a string!.";
	const char* pt3 = "I am a string!.";
	const char* pt4 = "I am a string!!!!!!.";
	const char ar1[] = "I am a string!.";
	const char ar2[] = "I am a string!.";
	const char ar3[] = "I am a string!!.";

	printf("Rodata low \t%llu %llu %llu %llu\n",
			(unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4, (unsigned long long)"I am a astring!.");

	printf("Stack high \t%llu %llu %llu\n",
			(unsigned long long)ar1, (unsigned long long)ar2, (unsigned long long)ar3);
	printf("\n");
	/* Local Variables */

	printf("Stack high \t%llu %llu %llu\n",
			(unsigned long long)&pt2,(unsigned long long)&pt3,(unsigned long long)&pt4);
	int i;
	printf("Stack high \t%llu\n", (unsigned long long) & i);
	printf("\n");

	test_function();

	printf("\n");

	/*Dynamic Allocation*/

	char* p5 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t%llu\n", (unsigned long long)p5);

	char* p6 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t%llu\n", (unsigned long long)p6);
	printf("\n");

	pt2++;
	puts(pt2);

	printf("\n");

	char heart[] = "I love kelly!";
	const char* head = "I love kelly!";

	for (int i = 0; i < 6; i++)
		putchar(heart[i]);
	putchar('\n');

	for (int i = 0; i < 6; i++)
		putchar(head[i]);
	putchar('\n');

	head = heart;
	// ERROR --> heart = head;
	heart[7] = 'H';
	*(heart +7 ) = 'K';

	const char * str1 = "When all the lights are low, ...";
	const char* copy;

	copy = str1; // text segment's address is copied

	printf("%s %p %p\n", str1, str1, &str1);
	printf("%s %p %p\n", copy, copy, &copy);

	return 0;
}
