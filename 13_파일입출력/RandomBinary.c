
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// make a test binary file//
	{
		FILE *fp = fopen("binary", "wb");
		for (int i = 0; i<100; i++)
		{
			double d = i * 1.11;
			fwrite(&d, sizeof(double), 1, fp);
		}
		fclose(fp);
	}

	//reading
	
	FILE *fp = fopen("binary", "rb");
	long cur;
	double d;

	cur = ftell(fp);
	printf("before reading %ld\n", cur);

	fread(&d, sizeof(d), 1, fp);

	cur = ftell(fp);
	printf("After reading %ld\n", cur);

	printf("%f\n", d);

	fread(&d, sizeof(double), 1, fp);
	printf("%f\n", d);
	cur =ftell(fp);
	printf("After reading %ld\n", cur);

	fseek(fp, sizeof(double) * 4, SEEK_SET);
	fread(&d, sizeof(double), 1, fp);
	cur = ftell(fp);
	printf("%f\n", d);

	return 0;
}
