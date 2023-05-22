#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void main()
{
	srand((unsigned)time(NULL));
	int i, max=0, a[SIZE]={0};        // 0으로 초기화 하지 않으면 쓰레기값이 들어간다
	for(i=0; i<100; i++)
		a[rand()%SIZE]++;
	printf(" 난수 빈도수\n");
	printf("===============\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%3d  %4d\n", i, a[i]);
		if(a[i]>a[max])
			max=i;
	}
	printf("가장 많이 생성된 수는 %d이다", max);
}

