#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 5
#define COL 3

void exam(int grade[][COL]);
void main()
{
    srand((unsigned)time(NULL));
    int i, j, grade[ROW][COL] = {0};
    printf("학번  #1  #2  #3\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            grade[i][j] = rand() % 101;
        printf("%3d  %3d %3d %3d\n", i + 1, grade[i][0], grade[i][1], grade[i][2]);
    }
    printf("\n");
    exam(grade);
}

void exam(int grade[][COL])
{
    int i, j, min, max;
    for (i = 0; i < ROW; i++)
    {
        min = 0, max = 0;
        for (j = 0; j < COL; j++)
        {
            if (grade[i][j] < grade[i][min])
                min = j;
            else if (grade[i][j] > grade[i][max])
                max = j;
        }
        printf("%d번 학생의 최대 점수는 %d, 최소 점수는 %02d 이다.\n", i + 1, grade[i][max], grade[i][min]);
    }
}