#include <stdio.h>
#include <math.h>
#define pi 3.141592

double sin_degree(double);

int main()
{
    double i, r, sini, input, output;

    for (i = 0; i <= 180; i += 10)

    {

        r = (pi * i) / 180;

        sini = sin(r);

        printf("sin(%lf)의 값은 %lf\n", i, sini);
    }

    printf("각도를 입력하시오: ");

    scanf("%lf", &input);

    output = sin_degree(input);

    printf("sin(%lf)는 %lf", input, output);

    return 0;
}

double sin_degree(double input)

{

    double sin_;

    input = (pi * input) / 180;

    sin_ = sin(input);

    return sin_;
}