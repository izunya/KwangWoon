#include <stdio.h>

int main()
{
    double x, y;

    printf("x,y의 값을 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0)
        printf("1사분면");
    else if (x > 0 && y < 0)
        printf("2사분면");
    else if (x < 0 && y < 0)
        printf("3사분면");
    else if (x < 0 && y > 0)
        printf("4사분면");
    else if (x == 0 && y != 0)
        printf("y좌표");
    else if (x != 0 && y == 0)
        printf("x좌표");
    else if (x == 0 && y == 0)
        printf("원점");
    else
        printf("잘못된 입력.");

    return 0;
}