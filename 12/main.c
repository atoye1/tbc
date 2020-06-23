
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* static variable with external linkage
 * filescope, external linkage, static storage duartion
 * external storage class
 * external variables
 */

int g_int = 0; // -> STATIC VARIABLE
double g_arr[1000] = { 0, };// or double g_arr[1000] is OK

int x = 5;
int y = 1 + 2;
size_t z = sizeof(int);
// int x2 = 2* x IS NOT OK.

void fun()
{
	printf("g_int in fun() %d %p\n", g_int, &g_int);
	g_int += 10;
}

void fun_sec();

int main()
{
	extern double g_arr[];
	printf("g_int in main() %d %p\n", g_int, &g_int);
	g_int += 1;

	fun();
	fun_sec();

	return 0;
}

