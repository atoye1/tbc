/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double*, double*);

int main()
{

	return 0;
}

double average(double* start, double* end)
{
	int count = end - start ;
	double avg = 0.0;
	while(start <= end)
	{
		avg += *start++;
		//count++;
	}
	avg /= (double)count;

	return avg;
}
