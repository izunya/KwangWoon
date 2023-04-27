#include <stdio.h>

int main() {
    int select;

    do{
        printf("=menu=\n");
        printf("1. 짜장\n");
        printf("2. 짬뽕\n");
        printf("3. 볶음밥\n");
        printf("4. 우동\n");
        printf("0. 종료\n");
        printf("==============\n");
        printf("선택:");
        scanf("%d", &select);

        switch (select) {
            case 1:
                printf("짜장 선택\n");
                break;
            case 2:
                printf("짬뽕 선택\n");
                break;
            case 3:
                printf("볶음밥 선택\n");
                break;
            case 4:
                printf("우동 선택\n");
                break;
            case 0:
                printf("종료\n");
                break;
            default:
                printf("잘못된 선택\n");
        }
    } while (select != 0);
}