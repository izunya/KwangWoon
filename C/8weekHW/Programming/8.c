#include <stdio.h>

double get_tax(int);

int main()

{

    int money;

    double tax;

    printf("소득을 입력하시오(만원):");

    scanf("%d", &money);

    tax = get_tax(money);

    printf("소득세는 %lf입니다.", tax);

    return 0;
}

double get_tax(int income)

{

    double tax;

    if (income <= 1000)

    {

        tax = income * 0.08;

        return tax;
    }

    else

        tax = income * 0.1;

    return tax;
}