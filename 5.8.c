#include <stdio.h>

int main()
{
	int a = 0;
	a++;
	printf("%d\n", a);

	++a;
	a += a;
	printf("%d\n" ,a);

	double b = 0;
	b ++;
	printf("%f\n" ,b);


	int count = 0;
	while (count <10)
	{
		printf("%d ", count++);
		//count ++; 전위연산자 해당 줄의 코드를 실행하기 전에 값이 바뀜
		//++ count; 후위연산자 해당 줄의 코드를 실행하고 난 후 값을 변경
	}


	//int i = 1, j = 1;
	//int i_post , pre_j;

	//i_post = i ++; // i_post는 후위 증가연산자이므로 i를 먼저 대입하고 증가시킨다
	//pre_j = ++j;

	//printf("%d %d\n", i, j);

	//printf("%d %d\n", i_post, pre_j);


	//int i = 3;
	//int l = 2 * --i;
	//printf("%d %d\n", i, l);

	//i = 1;
	//l = 2 * i --;
	//printf("%d %d\n", i, l);
	
	return 0;
}

