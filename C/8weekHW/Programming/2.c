#include <stdio.h>

int is_multiple(int, int);

int main()
{

    int input_1, input_2, output;

    printf("첫번째 정수를 입력하시오:");

    scanf("%d", &input_1);

    getchar();

    printf("두번째 정수를 입력하시오:");

    scanf("%d", &input_2);

    output = is_multiple(input_1, input_2);

    if (output == 1)

        printf("%d은 %d의 배수입니다.", input_1, input_2);

    else

        printf("%d은 %d의 배수가 아닙니다.", input_1, input_2);

    return 0;
}

int is_multiple(int n, int m)

{

    if (n % m == 0)

        return 1;

    else

        return 0;
}
