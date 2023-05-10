#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int usr,com, n=0, win = 0,lose = 0;
    srand((unsigned int)time(NULL));
    do{
        com = rand() % 3 + 1;
        printf("가위(1), 바위(2), 보(3), 종료(9) 중 하나를 선택하세요: ");
        scanf("%d", &usr);
        if(usr >= 4) continue;
        switch (usr) {
            case 1:
                printf("당신은 가위를 냈습니다.\n");
                break;
            case 2:
                printf("당신은 바위를 냈습니다.\n");
                break;
            case 3:
                printf("당신은 보를 냈습니다.\n");
                break;
            case 9:
                printf("게임을 종료합니다.\n");
                break;
        }
        switch (com) {
            case 1:
                printf("컴퓨터는 가위를 냈습니다.\n");
                break;
            case 2:
                printf("컴퓨터는 바위를 냈습니다.\n");
                break;
            case 3:
                printf("컴퓨터는 보를 냈습니다.\n");
                break;
        }
        n++;
        if(usr - com == 0){
            printf("비겼습니다.\n");
        }
        else if(usr - com == 1 || usr - com == -2){
            printf("이겼습니다.\n");
            win++;
        }
        else{
            printf("졌습니다.\n");
            lose++;
        }
    } while (usr != 9);
    printf("%d전 %d승 %d패 승률=%.2lf%%\n", n, win, lose, (double)win/n*100);
}

void rps(){
    int usr,com;
    srand((unsigned int)time(NULL));
    printf("가위(1), 바위(2), 보(3) 중 하나를 선택하세요: ");
    scanf("%d", &usr);
    com = rand() % 3 + 1;
    printf("컴퓨터는 %d를 냈습니다.\n", com);
    if(usr - com == 0)
        printf("비겼습니다.\n");
    else if(usr - com == 1 || usr - com == -2)
        printf("이겼습니다.\n");
    else
        printf("졌습니다.\n");
}