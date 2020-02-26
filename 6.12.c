// 제논의 역설
#include <stdio.h>

int main()
{
	//Simulation of a Moving Object

	//Speed = 1.0 m/s
	//dt = 1.0 s
	//Distance traveld during dt = Speed * dt

	//step 1 = 1.0m/s *

	//int speed, dt, distance;
	//speed = 1;
	//dt = 1;
	//for(dt; dt<10; dt++)
	//{
	//	int speed = 1;
	//	int distance = dt * speed;
	//	printf("%d, %d\n", distance, dt);
	//}
	
	const double speed = 1.0;
	const unsigned repeat_max = 15; double dt = 1.0;
	double time =0.0;
	double dist = 0.0;

	for (unsigned i = 0; i < repeat_max; ++i){
		dist += speed * dt;
		time += dt;
		dt = dt * 0.5;

		printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);
	}

	return 0;
}
