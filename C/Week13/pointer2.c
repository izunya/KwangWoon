#include <stdlib.h>
#include "stdio.h"

int main(){
    int score[5];
    char name[10];

    printf("숫자 5개: ");
    for(int i = 0 ; i < 5; i++){
        scanf("%d", &score[i]);
    }

    printf("이름: ");
    scanf("%s", name);
    system("clear");
    printf("이름[문자열]: %s\n", name);
    printf("이름[문자]: ");
    for(int i = 0 ; i < 10; i++){
        if(name[i] != '\0')
            printf("%c ", name[i]);
        else
            break;
    }
    printf("\n");
    printf("입력된 숫자\n");
    for(int i = 0 ; i < 5; i++){
        printf("%d ", score[i]);
    }
    return 0;
}