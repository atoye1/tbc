
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

struct person // "person" is a tag of structure
{
	char name[MAX];
	int age;
	float height; //멤버를 선언하는 행위로는 메모리를 차지하지는 않는다.
};

int main()
{
	int flag;

	struct person genie;
	strcpy(genie.name, "will smith");
	
	genie.age = 100;

	flag = scanf("%f", &genie.height);
	printf("%f\n", genie.height);


	struct person princess = { "Naomi Scott", 18, 160.0f };

	struct person princess2 = {
		"Naomi Scott",
		18,
		160.0f
	};


	/* Designated Initializerz */

	struct person beauty = {
		.age = 19,
		.name = "bell",
		.height = 150.0f
	};


	/* pointer to structure variable */

	struct person* someone;

	someone = &genie;
	
	someone->age = 1001;
	printf("case of structure pointer : %s %d %f\n", someone->name, (*someone).age, someone->height);
	// someone->name is as same as (*someone).age
	//
	/* no tag */
	
	struct {
		char farm[MAX];
		float price;
	} apple, apple2; // struct TAG 없이 variable을 마지막에 직접 선언 잠깐 쓸 구조체를 간단히 선언 


	return flag;
}
	
