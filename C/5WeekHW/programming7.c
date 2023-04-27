#include <stdio.h>

int main()
{
    int hei, wei, d;

    printf("체중과 키를 입력하시오(키, 체중): ");
    scanf("%d %d", &hei, &d);

    d = (hei - 100) * 0.9;

    if (wei > d)
        printf("과체중입니다");
    else if (wei = d)
        printf("평균입니다");
    else
        printf("저체중입니다");

    return 0;
}