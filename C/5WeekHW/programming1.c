#include <stdio.h>

int main() {
    int a , b;
    printf("정수를 입력하시오: ");
    scanf("%d", &a);
    printf("약수를 입력하시오: ");
    scanf("%d", &b);

    if(a % b == 0){
        printf("약수입니다.\n", b, a);
    }else{
        printf("약수가 아닙니다.\n", b, a);
    }
    return 0;
}