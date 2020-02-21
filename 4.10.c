//# usage of scanf()
#include <stdio.h>
#include <inttypes.h> // intmax_t 를 사용하기 위해
/* %c : 입력을 한 글자로 해석
 * %d %i : 입력을 부호가 있는 10진 정수로 해석
 * %e,f,g,a : 입력을 부동소수점 수로 해석
 * %o : 입력을 부호가 있는 8진 정수로 해석
 * %p : 입력을 포인터로 해석
 * %s : 입력을 문자열 (string)으로 해석
 * %u : 입력을 부호가 없는 10진 정수로 해석
 * %x X: 입력을 부호가 있는 16진 정수로 해석
 */

int main()
{
	//int i;
	//float f;
	//char str[5];

	//printf("Please Input Below\n");

	//scanf("%d %f %s", &i, &f, str);

	//printf("%d %f %s\n", i, f, str);

	//char c;
	//scanf("%c", &c); //try blank
	//printf("%i\n", c); //blank is 32
	//unsigned i;
	//scanf("%i", &i);
	//printf("%i\n", i);

	//unsigned i2;
	//scanf("%u", &i2); //try negative numbers
	//printf("%u\n", i2);

	//float d = 0.0;
	//scanf("%lf", &d);	//lf, try E notation
	//printf("%f\n", d); //f

	//char str[30];
	//scanf("%5s", str);
	//printf("%s\n", str);

	char i;
	scanf("%hhd", &i); //try large numbers
	printf("%i\n", i);


	intmax_t i;
	scanf("%ji", &i);
	printf("%ji", i);

	/* Regular character */
	int a, b;
	scanf("%d,%d", &a, &b);
	

	return 0;
	

}
