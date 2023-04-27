// 문제: 현재 가진 금액을 입력 받아 10000원 이상이면 새우깡사고 아니면 걍 간다.
#include <stdio.h>

int main() {
    int money;
    printf("얼마를 가지고있어? : ");
    scanf("%d", &money);
    if(money >= 10000) printf("새우깡을 산다.\n");
    printf("그냥 간다\n");
    return 0;
}
