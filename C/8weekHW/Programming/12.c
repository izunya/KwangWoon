#include <stdio.h>

int get_first_digit(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}

int main()
{
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    printf("가장 상위 자리수는 %d입니다.\n", get_first_digit(num));
    return 0;
}
