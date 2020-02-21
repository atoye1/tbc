//printf(제어-문자열, 아이템1, 아이템2, ...)

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	double d = 3.1414958987129873219837921873021873917389273123;
	int my_num = 231;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);
	printf("%u %u %u\n", 1024, -1, UINT_MAX);
	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d); // l in %lf is ignored


	printf("\n");
	printf("%o\n",9);
	printf("%p\n", &d); // &d is pointer of operator
	// d변수가 위치한 메모리의 주소를 출력가능합니다. 
	printf("%p\n", &my_num);

	printf("\n");
	printf("%x %X\n", 11, 11);
	printf("%%\n" ,d);

	printf("\n");
	printf("%9d\n", 12345);
	printf("%09d\n", 12345);
	printf("%.2f\n", 3.141592);
	printf("%.20f %.20lf\n", d, d); // double types mem is restricted 
	// remains omiited
	//
	printf("\n");
	int n_printed = printf("Counting!");
	printf("%u\n", n_printed);


	return 0;

}
