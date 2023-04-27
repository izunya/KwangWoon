#include <stdio.h>

int main() {
    int x;
    int y;
    int sum;

    printf("첫 번재 숫자를 입력하시오.");
    scanf("%d", &x);

    printf("두 번째 숫자를 입력하시오.");
    scanf("%d", &y);

    sum = x + y;
    printf("두수의 합: %d", sum);
    return 0;
}
