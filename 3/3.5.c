#include <stdio.h>

#define PI 3.141592f // 기호적 상수
#define AI_NAME "Friday"

int main()
{
	float radius, area, circum;

	const float pi = 3.141592;	//after const value cannot be changed
	// nowdays contst+ is recommended to make sysbolic constant than define
	printf("I'm %s.\n", AI_NAME);
	printf("Input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius; // area
	circum = 2.0 * PI * radius;

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	//TODO: wrong usage, string, const
	//
	return 0;
}
