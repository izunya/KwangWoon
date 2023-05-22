#include <stdio.h>

void vector_add(double x[], double y[], double z[])
{
	int i;
	for(i=0; i<3; i++)
	{
		z[i] = x[i] + y[i];
		printf("%4lf ", z[i]);
	}
	printf("\n");
}

void vector_dot(double x[], double y[])
{
	int i;
	double sum=0;
	for(i=0; i<3; i++)
		sum += x[i]*y[i];
	printf("%lf", sum);
}

void main()
{
	double x[3]={1, 2, 3};

	double y[3]={4, 5, 6};

	double z[3]={0};
	vector_add(x, y, z);
	vector_dot(x, y);
}

