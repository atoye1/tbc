// 마지막 오류를 풀지 못했다.
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 3

int main()
{
	double year2016[MONTHS] = {-3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2};
	double year2017[MONTHS] = {-1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9};
	double year2018[MONTHS] = {-4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6};

	double **m = malloc(sizeof(double) * YEARS+1);

	for (int i=0; i<YEARS+1;i++)
	{
		m[i]= malloc(sizeof(double) * MONTHS);
	}

	for (int i=0; i<YEARS+1;i++)
	{
		if (i == 0)
		{
			for(int j=0; j<MONTHS; j++)
			{
				m[i][j] = j+1;
			}
		}
		else if (i ==1) m[i] = year2016;
		else if (i ==2) m[i] = year2017;
		else if (i ==3) m[i] = year2018;
	}

	printf("[Temperature Data]");
	for(int i=0; i<YEARS +1; i++)
	{
		if (i==0) printf("Year index :\t" );
		else if (i==1) printf("Year 0 :\t");
		else if (i==1) printf("Year 1 :\t");
		else printf("Year 2 :\t");
		
		for( int j=0; j<MONTHS; j++)
		{
			printf("%.1f\t ", m[i][j]);
		}
		printf("\n");
	}

	double avgs[3];

	for(int i=0; i<YEARS+1; i++)
	{
		if (i ==0) continue;

		double temp=0;

		for (int j=0; j<MONTHS; j++)
		{
			temp += m[i][j];
		}
		avgs[i-1]=temp/MONTHS;
	}


	printf("\n[Yearly average temperatures of 3 years]\n");
	for (int i=0; i<3; i++)
	{
		printf("Year %d : average temperature = ", i);
		printf("%.1f\n", avgs[i]);
	}

	printf("\n[Monthly average temperature for 3 years]");

	double m_avgs[12];
	
	for (int j=0; j<MONTHS; j++)
	{
		double temp_avg;
		for (int i=1; i<YEARS+1; i++)
		{
			printf("the value of %d,%d : %f,,%f\n", i, j, m[i][j], temp_avg);
			temp_avg += m[i][j];
		}
		printf("before divide: %f\n", temp_avg);
		temp_avg /= 3;
		
		m_avgs[j] = temp_avg;
		printf("Temp_avg: %f\n\n", temp_avg);
	}
	
	for (int i=0; i<MONTHS; i++)
		printf("%f\t", m_avgs[i]);

	printf("\n");
	double why;
	why += m[1][1];
	why += m[2][1];
	why += m[3][1];
	printf("why value: %f\n", why);
	printf("%.1f", why/3);


	return 0;
}
