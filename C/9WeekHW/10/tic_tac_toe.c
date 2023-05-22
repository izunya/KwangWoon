#include <stdio.h>

int main(){
    char board[3][3];
    int x,y,k,i;


    // 보드를 초기화한다.
    for(i=0;i<3;i++){
        for(k=0;k<3;k++){
            board[i][k] = ' ';
        }
    }
    // 사용자로부터 위치를 받아서 보드에 표시한다.
    for(i=0;i<9;i++){
        printf("(x,y) 좌표: ");
        scanf("%d %d",&x,&y);
        board[x][y] =(k% 2 == 0) ? 'X' : 'O';

        for(i = 0; i< 3; i++){
            printf("---|---|---\n");
            printf("%c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
        }
        printf("---|---|---\n");
    }
    return 0;
}