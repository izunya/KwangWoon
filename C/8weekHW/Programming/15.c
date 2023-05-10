#include <stdio.h>

double factorial(int);

int main()
{

    int until, i;

    double output = 1;

    printf("어디까지 계산할까요:");

    scanf("%d", &until);

    for (i = 1; i <= until; i++)

    {

        output += 1.0 / factorial(i);
    }

    printf("오일러의 수는 %lf입니다.", output);

    return 0;
}

double factorial(int n)

{

    double sum = 1;

    int i;

    for (i = 1; i <= n; i++)

        sum *= i;

    return sum;
}