#include <stdio.h>

int integer(void)

{

    int input;

    printf("연도를 입력하시오:");

    scanf("%d", &input);

    return input;
}

int is_leap(int year)

{

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))

        return 366;

    else

        return 365;
}

int main()

{

    int year, output;

    year = integer();

    output = is_leap(year);

    if (output == 366)

        printf("%d년은 윤년 입니다.", year);

    else

        printf("%d년은 평년 입니다.", year);

    return 0;
}