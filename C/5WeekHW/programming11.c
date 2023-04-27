#include <stdio.h>

int main()
{
    char x;

    printf("문자를 입력하시오 : ");
    scanf("%c", &x);

    switch (x)
    {
    case 'R':
        printf("Rectangle");
        break;
    case 'T':
        printf("Triangle");
        break;
    case 'C':
        printf("Circle");
        break;
    default:
        printf("Unknown");
        break;
    }

    return 0;
}