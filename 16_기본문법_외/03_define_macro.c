
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전처리 지시자는 #(해쉬) 기호로 시작한다.

// 매크로는 일련의 명령들을 하나의 명령으로 축약된 폼으로 나타내는 지시자이다.

#define 	SAY_HELLO	printf("Hello, World!\n");
//preprocessor	Macro(name)	body(or replacement list)
//directive
//
//Macro expansion

/*
  Object-like macros vs Function like macros
 */

#define ONE 1		//object like
#define SQUARE(X) X*X	//function like

#define PI 3.141592 	//symbolic or manifest(나열된 목록이란 뜻), constants
#define GRAVITY 9.8

#define THREE 3
#define MESSAGE "The greatest glory in living lies not in never falling, \
but in rising every time we fall."

#define NINE	THREE * THREE
#define FORMAT "Number is %d.\n"

	#define WITH_BLANK 1

#define MY_CH 'Z'
#define MY_ST "Z" // Z\0 스트링이므로 보이지 않는 널캐릭터가 들어간다.

#define LIMIT 20
const int LIM = 50;
static int arr1[LIMIT];
int main()
{
	SAY_HELLO
	SAY_HELLO;
	printf("%s\n", MESSAGE);
	printf("%d\n", NINE);
	printf(FORMAT, NINE);
	SAY_HELLO;
	return 0;

}
