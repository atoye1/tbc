#include <stdio.h>
#include <string.h> // strlen and more
#include <stdlib.h> // strlen and more

int main()
{
	char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = "\0";
	char str4[100] = "\n";

	printf("%zu %zu\n", sizeof(str1), strlen(str1));
	printf("%zu %zu\n", sizeof(str2), strlen(str2));
	printf("%zu %zu\n", sizeof(str3), strlen(str3));
	printf("%zu %zu\n", sizeof(str4), strlen(str4));

	/* 다른 시스템에서는 unsigned int가 아닐수도 있어서
	 * 이식성을 높이기위해서 size_t를 사용한다.
	 * 다른 시스템에서는 signed int가 될수도 있다.
	 * 이런 자료형을 portable_type 라 한다.
	 */

	char *str5 = (char*)malloc(sizeof(char) * 100);
	// *str5는 얼마나많은 메모리를 할당할건지 알수 없기 때문에
	// 메모지의 사이즈 만큼 주소를 저ㄱ는 만큼만 알 수 있다.
	// 무슨말인지 하나도 모르겠다.
	str5[0] = 'H';
	str5[1] = 'e';
	str5[2] = 'l';
	str5[3] = 'l';
	str5[4] = 'o';
	str5[5] = '\0';

	printf("%zu %zu\n", sizeof(str5), strlen(str5));

	return 0;
}


