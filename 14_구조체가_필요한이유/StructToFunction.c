
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50

struct fortune {
	char	bank_name[FUNDLEN];
	double 	bank_saving;
	char 	fund_name[FUNDLEN];
	double 	fund_invest;
};

double sum(double*, double*);

int main()
{
	struct fortune my_fortune = {
		"Wells-Fargo",
		4032.27,
		"JPMorgan Chase",
		8543.94
	};

	printf("Total : $%.2f.\n",
			sum(&my_fortune.bank_saving, &my_fortune.fund_invest));
	return 0;
}

double sum(double* x, double* y)
{
	return *x + *y;
}
