#include <stdio.h>

int main() {
    int cm, age;
    printf("키를 입력하시오: ");
    scanf("%d", &cm);

    printf("나이를 입력하시오: ");
    scanf("%d", &age);

    if(cm <= 140 && age >= 10){
        printf("타도 좋습니다.\n");
    }else{
        printf("죄송합니다. \n");
    }
    return 0;
}