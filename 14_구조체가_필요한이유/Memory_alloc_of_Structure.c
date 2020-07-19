
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	/* Well designed Structure */

	struct Aligned
	{
		int a;
		float b;
		double c;
	}a1, a2;

	/* 4byte + 4byte + 8byte = 16byte struct */

	printf("struct Aligned a1\n");
	printf("Sizeof %zd\n", sizeof(struct Aligned));
	printf("%lld\n", (long long)& a1);
	printf("%lld\n", (long long)& a1.a);
	printf("%lld\n", (long long)& a1.b);
	printf("%lld\n", (long long)& a1.c);
	printf("\n");

	printf("struct Aligned a2\n");
	printf("Sizeof %zd\n", sizeof(a2));
	printf("%lld\n", (long long)& a2);
	printf("%lld\n", (long long)& a2.a);
	printf("%lld\n", (long long)& a2.b);
	printf("%lld\n", (long long)& a2.c);

	/*
	 * padding is known as structure member alignment
	 * 1 word: 4bytes in x86, 8bytes in x64
	 * chunk of datas when ram and cpu communicate is WORD
	 */
	struct Padded1
	{
		char a;
		float b;
		double c;
	}p1;

	printf("struct Padded p1\n");
	printf("sizeof %zd\n", sizeof(struct Padded1));
	printf("%lld\n", (long long)& p1);
	printf("%lld\n", (long long)& p1.a);
	printf("%lld\n", (long long)& p1.b);
	printf("%lld\n", (long long)& p1.c);
	printf("\n");

	struct Padded2
	{
		float a;
		double b;
		char c;
	}p2;

	printf("struct Padded p2\n");
	printf("sizeof %zd\n", sizeof(struct Padded2));
	printf("%lld\n", (long long)& p2);
	printf("%lld\n", (long long)& p2.a);
	printf("%lld\n", (long long)& p2.b);
	printf("%lld\n", (long long)& p2.c);

	struct Person
	{
		char name[41];
		int age;
		float height;
	};

	struct Person mommy;
	
	printf("\nstruct Person\n");
	printf("%lld\n", (long long)& mommy.name[0]);
	printf("%lld\n", (long long)& mommy.age);
	printf("%lld\n", (long long)& mommy.height);
	printf("Sizeof %zd\n", sizeof(mommy));

	struct Person f[4];

	printf("sizeof a structure aray %zd\n", sizeof(f));
	return 0;
}
