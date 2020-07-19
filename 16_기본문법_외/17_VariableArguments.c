
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdarg.h> // Variable Arguments

/*
 * Variable Arguments
 * - int printf(char const* const_Format, ...);
 *
 *   1. provide a function prototype using an ellipsis
 *   void vaf1(int n, ...); //OK
 *   int vaf2(const char * s, int k, ...); // OK
 *   char vaf3(char c1, ..., char c2); // NOT ok ellipsis should be the last.
 *   double va4(...); // NOT ok no params
 *
 *   2. Create a va_list type variable in the function definition
 *   3. Use a macro to initialize the variable to an argument list. va_strt
 *   4. Use a macro to access the argument list. va_arg, va_end
 */

double average(int num, ...);
double average2(char* format_string, ...);

int main()
{
	double a, b;

	//a = average(3, 1.1, 2.2, 3.3);
	//b = average(6, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6);

	a = average2("d", 1.1, 2.2, 3.3);
	b = average2("dd", 1.1, 2.2, 3.3, 4.4, 5.5, 6.6);
	
	printf("%lf %lf\n", a, b);

	return 0;
}

double average(int num, ...)
{
	va_list ap; // typedef char va_list is defined in stdarg.h
	double sum = 0.0;
	int i;

	va_start(ap, num);
	for (i = 0; i < num; i++)
		sum += va_arg(ap, double); // must specifiy types of args
	va_end(ap);

	return sum / (double)num;
}

double average2(char* format_string, ...)
{
	int num = strlen(format_string);

	va_list  ap;
	double sum = 0.0;
	int i;

	va_start(ap, format_string);
	for ( i = 0; i < num; i++)
	{
		sum += va_arg(ap, double);
	}
	va_end(ap);

	return sum / (double)num;
}
