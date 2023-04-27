#include <stdio.h>

int main() {
    int a , b, c;
    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c){
        printf("가장 작은 수는 %d입니다.\n", a);
    }else if(b < a && b < c){
        printf("가장 작은 수는 %d입니다.\n", b);
    }else{
        printf("가장 작은 수는 %d입니다.\n", c);
    }
    return 0;
}