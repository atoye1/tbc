#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdatomic.h>
#include <unistd.h>

_Atomic int acnt = 0; // atomic type qualifier
//ATOMIC 동일한 전역변수 활용식 cpu와 메모리의 분리때문에 값이 달라질수 있음을 방지한다.
//Racing Condition 경쟁상태를 방지하기 위한 

void *myThreadFun(void *vargp)
{
	int n = 1;
	for (int j = 0; j < 10; ++j)
	{
		sleep(1);
		acnt += n; // Atomic calc is slower than normal calculation
		printf("Printing from Thread %d %llu\n", acnt, (unsigned long long)&n);
	}
	return NULL;
}

int main()
{
	pthread_t thread_id1, thread_id2;
	printf("Before Thread\n");

	pthread_create(&thread_id1, NULL, myThreadFun, NULL);
	pthread_create(&thread_id2, NULL, myThreadFun, NULL);

	pthread_join(thread_id1, NULL);
	pthread_join(thread_id2, NULL);

	printf("After Thread\n");
	printf("Atomic %d\n", acnt);

	return 0;
}
