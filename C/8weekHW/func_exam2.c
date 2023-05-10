#include <stdio.h>

void happyBrithday(int age){

    printf("생일축하 합니다! \n");
    printf("생일축하 합니다! \n");
    printf("사랑하는 친구의 ");
    printf("%d번째 생일축하 합니다! \n",age);
}

int main(){
    int age;
    printf("당신의 나이를 입력하세요: ");
    scanf("%d", &age);
    happyBrithday(age);
    return 0;
}