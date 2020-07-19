
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define MASK_SWORD	(1 << 0)
#define MASK_SHIELD	(1 << 1)
#define MASK_POTION	(1 << 2)
#define MASK_GUNTLET	(1 << 3)
#define MASK_HAMMER	(1 << 4)
#define MASK_KEY	(1 << 5)
#define MASK_RING	(1 << 6)
#define MASK_AMULET	(1 << 7)


// 게임에서 아이템 소지 여부를 파악할때 비트단위 연산자가 유용하다.

void char_binary(const char num);
void int_binary(const int num);


int main()
{

	char flags = 0; //MASK flags
	char_binary(flags);

	printf("\nTurning Bits On (Setting Bits)\n");
	printf("\n USE | operator\n");

	flags = flags | MASK_SWORD; //
	char_binary(flags);
	flags |= MASK_AMULET;
	char_binary(flags);

	printf("\nTurning Bits Off (Clearing Bits)\n");
	printf("\n USE & and ~ operator\n");

	flags = flags | MASK_POTION;
	char_binary(flags);
	flags = flags & ~MASK_POTION; // flags &= ~MASK_POTION
	char_binary(flags);

	printf("\nToggling Bits\n");
	printf("\n USE XOR operator\n");

	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	printf("\nChecking the Value of a Bit\n");
	printf("if ((flags & MASK_KEY) == MASK_KEY\n");
	if ((flags & MASK_KEY) == MASK_KEY)
		printf(" >> You can enter.\n");
	else
		printf(" >> You cannot enter.\n");

	printf("\nTrimming.\n");

	int int_flag = 0xffffffff;
	int_binary(int_flag);
	int_flag &= 0xff;
	int_binary(int_flag);

	return 0;
}

void int_binary(const int num)
{
	printf("Decimal %3d \t == Binary ", num);
	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const int mask = 1 << (bits -1 -i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}

void char_binary(const char num)
{
	printf("Decimal %3d \t==Binary ", num);
	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const char mask = 1 << (bits -1 -i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	
	printf("\n");
}

//void int_binary(const int num)
//{
//	printf("kkkkkkkk
