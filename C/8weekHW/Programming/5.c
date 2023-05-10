#include <stdio.h>
#define pi 3.141592

double cal_area(double x)
{

    double output = x * x * pi;

    return output;
}

double integer_radius(void)

{

    double radius;

    printf("원의 반지름을 입력하시오:");

    scanf("%lf", &radius);

    return radius;
}

int main()

{

    double radius, s;

    radius = integer_radius();

    s = cal_area(radius);

    printf("원의 면적은 %lf입니다.", s);

    return 0;
}