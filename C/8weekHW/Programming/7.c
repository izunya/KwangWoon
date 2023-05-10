#include <stdio.h>

int round(double);

int main()

{

    double f;

    int output;

    printf("실수를 입력하시오:");

    scanf("%lf", &f);

    output = round(f);

    printf("반올림한 값은 %d입니다.", output);

    return 0;
}

int round(double f)

{

    int input;

    input = (int)(f + 0.5);

    return input;
}