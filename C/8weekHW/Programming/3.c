#include <stdio.h>

double get_bigger(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    float num1, num2, bigger;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &num1, &num2);

    bigger = get_bigger(num1, num2);

    printf("큰 수는 %.1lf입니다.\n", bigger);

    return 0;
}
