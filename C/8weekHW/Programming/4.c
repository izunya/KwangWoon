#include <stdio.h>

char ger_integer(void)
{

    char ch;

    printf("문자를 입력하시오:");

    ch = getchar();

    return ch;
}

int check_alpha(char ch)

{

    if ((ch >= 'a') && (ch <= 'z'))

        return 1;

    else

        return 0;
}

int main()

{

    char ch;

    ch = ger_integer();

    if (check_alpha(ch) == 1)

        printf("%c는 알파벳 문자입니다.", ch);

    else

        printf("%c는 알파벳 문자가 아닙니다.", ch);

    return 0;
}
