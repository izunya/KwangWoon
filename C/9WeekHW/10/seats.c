#include <stdio.h>
#define SIZE 10

int main(){
    char ans1;
    int ans2, i;
    int seats[SIZE] = {0};
    while (1)
    {
        printf("좌석을 예약하시겠습니까? (y/n) ");
        scanf("%c", &ans1);

        if(ans1 == 'n') break;
        printf("--------------------------------\n");
        printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
        printf("--------------------------------\n");

        for(i = 0; i <SIZE;i++){
            printf("\t%d", seats[i]);
        }
        printf("\n");

        printf("몇 번째 좌석을 예약하시겠습니까?");
        scanf("%d", &ans2);
        if(seats[ans2 - 1] == 0){
            seats[ans2 - 1] = 1;
            printf("예약되었습니다.\n");
        }
        else{
            printf("이미 예약된 좌석입니다.\n");
        }
        return 0;
    }
    
}