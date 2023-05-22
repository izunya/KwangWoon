#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 10

// 함수 통합
void main()
{
	srand((unsigned)time(NULL));
	int i, sum=0, a[SIZE]={0};
	float mean, sd;
	for(i=0; i<SIZE; i++)
	{
		printf("데이터를 입력하시오: %d\n", a[i]=rand()%100);
		sum+=a[i]; 
	}
	printf("\n");
	mean = sum/SIZE;
	printf("평균값은 %f\n", mean);
	sum=0;
	for(i=0; i<SIZE; i++)
		sum+=(a[i]-mean)*(a[i]-mean);
	sd = sqrt(sum/SIZE);
	printf("표준편차값은 %f\n", sd);
}
// 함수 분할
// #define SIZE 10
// float mean(int a[], int n);
// void sd(int a[], int n, float mean);
// void main()
// {
// 	srand((unsigned)time(NULL));
// 	int i, a[SIZE]={0};
// 	float m;
// 	for(i=0; i<SIZE; i++)
// 		printf("데이터를 입력하시오: %d\n", a[i]=rand()%100);
// 	m=mean(a, SIZE);
// 	sd(a, SIZE, m);
// }

// float mean(int a[], int n)
// {
// 	int i, sum=0;
// 	float mean;
// 	for(i=0; i<SIZE; i++)
// 		sum+=a[i];
// 	mean=sum/SIZE;
// 	printf("평균값은 %f\n", mean);
// 	return mean;
// }

// void sd(int a[], int n, float mean)
// {
// 	int i, sum=0;
// 	float sd;
// 	for(i=0; i<SIZE; i++)
// 		sum+=(a[i]-mean)*(a[i]-mean);
// 	sd = sqrt(sum/SIZE);
// 	printf("표준편차값은 %f\n", sd);
// }

