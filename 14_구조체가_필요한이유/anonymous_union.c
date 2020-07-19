
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
 * Union and Struct
 */

struct personal_owner {
	char rrn1[7]; // Resident Registration Number
	char rrn2[8]; // ex :830422-1185600
};

struct company_owner {
	char crn1[4]; // Company Reg Num
	char crn2[3]; // ex: 111-22-3333
	char crn3[6];
};


struct car_data{
	char model[15];
	int status; // 0=po, 1=co
	union {
		struct personal_owner po;
		struct company_owner co;
	};
};

void print_car(struct car_data car)
{
	printf("----------------------------\n");
	printf("Car model : %s\n", car.model);

	if (car.status == 0)
		printf("personal owers : %s-%s\n", car.po.rrn1,
				car.po.rrn2);
	else
		printf("Company owner: %s-%s-%s\n",
				car.co.crn1,car.co.crn2,car.co.crn3);

	printf("-----------------EOP------------------");
}
int main()
{
	struct car_data my_car = {.model ="Sonata", .status = 1, .co = {"111", "22","3333"}};

	struct car_data your = {.model ="ta", .status = 0, .po = {"111123", "288122"}};

	//strcpy(my_car.model, "Sonata");
	//my_car.status = 1;
	//strcpy(my_car.co.crn1,"1234");
	//strcpy(my_car.co.crn2,"abc");
	//strcpy(my_car.co.crn3,"humetr");

	print_car(my_car);
	print_car(your);
	return 0;
}
