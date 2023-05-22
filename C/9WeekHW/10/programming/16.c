#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MINE_PER 30

enum CS
{
    HID,
    REVAL,
    MINE
};

struct Board
{
    enum CS board[SIZE][SIZE];
    enum CS mine[SIZE][SIZE];
    int mines;
};

void init_board(struct Board *board)
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            board->board[i][j] = HID;
        }
    }
    srand((unsigned)time(NULL));

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (rand() % 100 < MINE_PER)
            {
                board->mine[i][j] = MINE;
                board->mines++;
            }
        }
    }
};

void print_board(struct Board *board)
{
    int i, j;

    printf("  ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%2d", i);
    }
    printf("\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%2d", i);
        for (j = 0; j < SIZE; j++)
        {
            if (board->board[i][j] == HID)
            {
                printf(" o");
            }
            else if (board->board[i][j] == REVAL)
            {

                printf(" *", board->board[i][j]);
            }
            else if (board->mine[i][j] == MINE)
            {
                printf(" #");
            }
        }
        printf("\n");
    }
};
int main()
{
    struct Board board;
    int row, col;
    init_board(&board);
    while (1)
    {
        system("clear");
        print_board(&board);
        printf("어떤 셀을 여시겠어요? (행번호, 열번호) ");
        scanf("%d %d", &row, &col);
        if (board.mine[row][col] == MINE)
        {
            board.board[row][col] = MINE;
            print_board(&board);
            printf("지뢰입니다.\n종료합니다.\n");
            break;
        }
        else if (board.board[row][col] == REVAL)
        {
            printf("이미 열린 셀입니다.\n");
            continue;
        }
        else
        {
            board.board[row][col] = REVAL;
        }
        if (board.mines == SIZE * SIZE - MINE_PER)
        {
            system("clear");
            print_board(&board);
            printf("지뢰를 모두 찾았습니다.\n종료합니다.\n");
            break;
        }
    }

    return 0;
}