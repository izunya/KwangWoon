#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice()
{
    return rand() % 6 + 1; 
}

int main()
{
    int user_score = 0, computer_score = 0;
    int i;

    srand((unsigned)time(NULL)); 
    int user_roll1, user_roll2, user_roll3;
    int computer_roll1, computer_roll2, computer_roll3;

    printf("사용자 주사위: ");
    user_roll1 = roll_dice();
    user_roll2 = roll_dice();
    user_roll3 = roll_dice();
    user_score += user_roll1 + user_roll2 + user_roll3;
    printf("(%d, %d, %d)=%d\n", user_roll1, user_roll2, user_roll3, user_score);

    printf("컴퓨터 주사위: ");
    computer_roll1 = roll_dice();
    computer_roll2 = roll_dice();
    computer_roll3 = roll_dice();
    computer_score += computer_roll1 + computer_roll2 + computer_roll3;
    printf("(%d, %d, %d)=%d\n", computer_roll1, computer_roll2, computer_roll3, computer_score);

    printf("\n");

    if (user_score > computer_score)
    {
        printf("사용자 승리\n");
    }
    else if (user_score < computer_score)
    {
        printf("컴퓨터 승리\n");
    }
    else
    {
        printf("무승부\n");
    }

    return 0;
}
