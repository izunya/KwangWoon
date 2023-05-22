#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_WIDTH 20
#define BOARD_HEIGHT 10

void printBoard(char board[BOARD_HEIGHT][BOARD_WIDTH]) {
    system("cls");
    for (int i = 0; i < BOARD_HEIGHT; i++) {
        for (int j = 0; j < BOARD_WIDTH; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand((unsigned)time(NULL));
    char board[BOARD_HEIGHT][BOARD_WIDTH];
    int playerX = BOARD_WIDTH / 2;  // 주인공의 초기 X 좌표
    int playerY = 0;                // 주인공의 초기 Y 좌표
    int monsterX = BOARD_WIDTH / 2; // 몬스터의 초기 X 좌표
    int monsterY = BOARD_HEIGHT / 2; // 몬스터의 초기 Y 좌표
    int goldX = BOARD_WIDTH / 2;    // 금의 X 좌표
    int goldY = BOARD_HEIGHT - 1;   // 금의 Y 좌표
    int gameOver = 0;

    // 게임 보드 초기화
    for (int i = 0; i < BOARD_HEIGHT; i++) {
        for (int j = 0; j < BOARD_WIDTH; j++) {
            board[i][j] = ' ';
        }
    }
    board[playerY][playerX] = '#'; // 주인공 표시
    board[monsterY][monsterX] = 'M'; // 몬스터 표시
    board[goldY][goldX] = 'G'; // 금 표시

    printBoard(board);

    while (!gameOver) {
        // 키 입력 처리
        char key = _getch();
        board[playerY][playerX] = ' '; // 이전 위치를 지우고
        switch (key) {
            case 'w':
                if (playerY > 0)
                    playerY--;
                break;
            case 's':
                if (playerY < BOARD_HEIGHT - 1)
                    playerY++;
                break;
            case 'a':
                if (playerX > 0)
                    playerX--;
                break;
            case 'd':
                if (playerX < BOARD_WIDTH - 1)
                    playerX++;
                break;
            default:
                break;
        }
        board[playerY][playerX] = '#'; // 새로운 위치에 주인공 표시

        // 몬스터 움직임 처리
        int monsterMoveX = rand() % 3 - 1; // -1, 0, 1 중 하나의 값을 랜덤으로 선택
        int monsterMoveY = rand() % 3 - 1; // -1, 0, 1 중 하나의 값을 랜덤으로 선택
        int newMonsterX = monsterX + monsterMoveX;
        int newMonsterY = monsterY + monsterMoveY;
        if (newMonsterX >= 0 && newMonsterX < BOARD_WIDTH)
            monsterX = newMonsterX;
        if (newMonsterY >= 0 && newMonsterY < BOARD_HEIGHT)
            monsterY = newMonsterY;

        printBoard(board);

        // 게임 종료 조건 확인
        if (playerX == goldX && playerY == goldY)
            gameOver = 1;
        if (playerX == monsterX && playerY == monsterY)
            gameOver = 1;
    }

    if (playerX == goldX && playerY == goldY)
        printf("금을 찾았습니다! 게임 종료!\n");
    else if (playerX == monsterX && playerY == monsterY)
        printf("몬스터에게 잡혔습니다! 게임 종료!\n");

    return 0;
}
