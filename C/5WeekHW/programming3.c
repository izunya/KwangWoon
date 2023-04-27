#include <stdio.h>

int main() {
    int a,b;
    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
    scanf("%d", &a);

    b = rand() % 3 + 1;
    if(a == b){
        printf("비겼습니다.\n");
    }else if(a == 1 && b == 2){
        printf("컴퓨터가 이겼습니다.\n");
    }else if(a == 1 && b == 3){
        printf("사용자가 이겼습니다.\n");
    }else if(a == 2 && b == 1){
        printf("사용자가 이겼습니다.\n");
    }else if(a == 2 && b == 3){
        printf("컴퓨터가 이겼습니다.\n");
    }else if(a == 3 && b == 1){
        printf("컴퓨터가 이겼습니다.\n");
    }else if(a == 3 && b == 2){
        printf("사용자가 이겼습니다.\n");
    }
    return 0;
}