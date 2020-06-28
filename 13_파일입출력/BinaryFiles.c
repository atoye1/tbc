
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	{
		FILE *fp = fopen("binary_file", "wb");

		double d = 1.0 / 3.0;
		int n = 123;
		int* parr = (int*)malloc(sizeof(int) * n);

		if (!parr)
			exit(1);

		for (int n = 0; n < 123; ++n)
			* (parr + n) = n * 2;

		fwrite(&d, sizeof(d), 1, fp);
		fwrite(&n, sizeof(n), 1, fp);
		fwrite(parr, sizeof(int), n, fp);

		fclose(fp);
		free(parr);
	}

	//Reading example, feof(), ferror()
	
	{
		FILE *fp = fopen("binary_file", "rb");
		double d;
		int n = 0;
		fread(&d, sizeof(d), 1, fp);
		fread(&n, sizeof(n), 1, fp);

		int *parr = (int*)malloc(sizeof(int) * n);

		if (!parr) exit(1);

		fread(parr, sizeof(int), n, fp);


		printf("feof = %d\n", feof(fp)); //feof함수는 EOF를 만났는지 물어봄
		
		printf("%f\n", d);
		printf("%d\n", n);
		for (int i = 0; i < n; ++i)
			printf("%d ", *(parr+i));
		printf("\n");

		printf("feof = %d\n", feof(fp));
		fread(&n, sizeof(n), 1, fp);

		printf("feof = %d\n", feof(fp)); // returns non-zero at EOF
		printf("ferror = %d\n", ferror(fp)); // returns 0 is O.K

		fwrite(&n, sizeof(n), 1, fp); // try writing to make an error

		printf("ferror = %d\n", ferror(fp));
	}

	return 0;
}
