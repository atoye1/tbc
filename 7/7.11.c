
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
int main()
{
	//unsigned int min, max, avg = 0;
	//unsigned int count, total = 1;	
	//int c;


	//while ((c=getchar()) != 'q')
	//{
	//	if (c == 'q')
	//		break;
	//	if (c < min)
	//	{
	//		printf("%d", c);
	//		min = c;
	//	}
	//	if (c > max)
	//		max = c;
	//	total += c;
	//	avg = total /count;
	//	count++;
	//}

	//printf("%d, %d, %d\n", min, max, avg);
	//printf("total is %d", total);
	
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input;
	int n = 0;
	float avg;

	while (scanf("%f", &input) == 1)
	{
		max = (input > max) ? input : max;
		min = (input < min) ? input : min;
		sum += input;
		n++;
		avg = sum / n;

	}
	printf("%f, %f, %f, %f", max, min, sum, avg);
	return 0;
}
