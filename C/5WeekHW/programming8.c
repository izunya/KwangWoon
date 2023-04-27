#include <stdio.h>

int main()
{
    int x, y;

    printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
    scanf("%d %d", &x, &y);

    if (x < 17)
    {
        if (y > 12 && y < 65)
            printf("요금은 34000원입니다.");
        else
            printf("요금은 25000원입니다.");
    }
    else
        printf("요금은 10000원입니다.");

    return 0;
}