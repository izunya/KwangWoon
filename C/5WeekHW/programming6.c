#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자를 입력하시오: ");

    scanf("%c", &ch);

    switch (ch)

    {

    case 'a':

    case 'e':

    case 'o':

    case 'i':

    case 'u':
        printf("모음입니다\n");
        break;

    default:
        printf("자음입니다\n");
        break;
    }

    return 0;
}