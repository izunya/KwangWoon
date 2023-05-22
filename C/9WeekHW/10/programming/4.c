#include <stdio.h>
#define SIZE 2

void array_copy(int a[], int b[], int size)
{
	int i;
	
	for(i=0; i<SIZE; i++)
	{
		b[i]=a[i];
		printf("%d ", b[i]);
	}
}

void main()
{
	int a[]={1, 2};
	int b[SIZE];
	
	array_copy(a, b, SIZE);
}