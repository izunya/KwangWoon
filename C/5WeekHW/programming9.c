#include <stdio.h>

int main()
{
    double x, y;

    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    if (x <= 0)
    {
        y = x * x * x * -9 * x + 2;
        printf("f(x)의 값은 %lf", y);
    }
    else if (x > 0)
    {
        y = 7 * x + 2;
        printf("f(x)의 값은 %lf", y);
    }
    else
        printf("잘못된 입력.");
}