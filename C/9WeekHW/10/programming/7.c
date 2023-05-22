#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 5
int main()
{
	srand((unsigned)time(NULL));
	int i, j, sum = 0, a[ROW][COL] = {0};
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%4d ", a[i][j] = rand() % 100);
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			sum += a[i][j];
		printf("%d행의 합은 %d입니다.\n", i + 1, sum);
	}
	sum = 0;
	printf("\n");
	for (j = 0; j < COL; j++)
	{
		for (i = 0; i < ROW; i++)
			sum += a[i][j];
		printf("%d열의 합은 %d입니다.\n", j + 1, sum);
	}
}
