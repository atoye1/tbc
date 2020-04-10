
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	/*
	 * string to int, double, long
	 * atoi(), atof(), atol()
	 * ascii to int, float, long
	 */

	if (argc < 3)
		printf("Wrong Usage of %s\n", argv[0]);
	else
	{
		//int times = atoi(argv[1]);

		//for (int i = 0; i < times; i++)
		//	puts(argv[2]);
		printf("Sum = %d\n", atoi(argv[1]) + atoi(argv[2]));	
	}

	char str1[] = "1024Hello";
	//char* end;
	char* end;
	long l = strtol(str1, &end, 10);
	printf("%s %ld %s %d\n", str1, l, end, (int)*end);

	char str2[] = "10FFHello";
	long l1 = strtol(str2, &end, 16);
	printf("%s %ld %s %d\n", str2, l1, end, (int)*end);

	char temp[2];
	//puts(_itoa(10, temp, 16));

	sprintf(temp, "%x", 112381098);
	puts(temp);

	return 0;


}
