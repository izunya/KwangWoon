#include <stdio.h>

void scalar_mult (int a[][3], int scalar)
{
	int  i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			printf("%2d ", a[i][j]*scalar);
		printf("\n");
	}
}

void transpose(int a[][3], int b[][3])
{
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			b[i][j] = a[j][i];
			printf("%2d", b[i][j]);
		}
		printf("\n");
	}	
}

int main(void) 
{
	int a[][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int b[][3]={0};
	scalar_mult(a, 2);
	printf("\n");
	transpose(a, b);
	return 0;
}