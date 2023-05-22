#include <stdio.h>

#define SIZE 2

int array_equal(int a[], int b[], int size)
{
	int i, result = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (a[i] == b[i])
			result += 1;
		else
			result += 0;
	}
	return result;
}

void main()
{
	int a[] = {1, 2};
	int b[] = {1, 2};
	if (array_equal(a, b, SIZE) == SIZE)
		printf("원소가 같다.\n");
	else
		printf("원소가 다르다.\n");
}
