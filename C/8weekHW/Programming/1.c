#include <stdio.h>

int even(int);

int absolute(int);

int sign(int);

int main(void)
{

    int z, i, j, n;

    printf("정수를 입력하시오:");

    scanf("%d", &z);

    i = even(z);

    printf("even()의 결과:");

    if (i == 1)

        printf("1\n");

    else

        printf("0\n");

    j = absolute(z);

    printf("absolute()의 결과:%d\n", j);

    printf("sign()의 결과:");

    n = sign(z);

    if (n == -1)

        printf("-1");

    else if (n == 1)

        printf("1");

    else

        printf("0");

    return 0;
}

int even(int n)

{

    if (n % 2 == 0)

        return 1;

    else

        return 0;
}

int absolute(int n)

{

    if (n < 0)

        return -n;

    else

        return n;
}

int sign(int n)

{

    if (n < 0)

        return -1;

    else if (n > 0)

        return 1;

    else

        return 0;
}
