#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{

    int price[SIZE] = {0};
    int i, minimum;

    printf("--------------------------------\n");
    printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
    printf("--------------------------------\n");
    srand((unsigned)time(NULL));
    for (i = 0; i < SIZE; i++)
    {
        price[i] = (rand() % 100)+1;
        printf("\t%-3d", price[i]);
    }
    printf("\n");

    minimum = price[0];
    for (i = 0; i < SIZE; i++)
    {
        if (minimum > price[i])
        {
            minimum = price[i];
        }
    }
    printf("최소값은 %d입니다.\n", minimum);
}