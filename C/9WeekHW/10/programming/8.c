#include <stdio.h>
#define ROW 10
#define COL 3

void main()
{
	int i, n, result=0, a[ROW][COL]={0};
	for(i=0; i<ROW; i++)
	{
		a[i][1]=i+1;
		a[i][2]=(i+1)*(i+1);
		a[i][3]=(i+1)*(i+1)*(i+1);
	}
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	for(i=0; i<ROW; i++)
	{
		if(n==a[i][3])
		{
			printf("%d의 세제곱근은 %d", n, a[i][1]);
			result=1;
			break;
		}
	}
	if (result==0)
		printf("해당 정수의 세제곱근은 배열에 없습니다.");
}

