#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()

{

    srand((unsigned)time(NULL));
    int i, j, least, temp, array[10];
    for (i = 0; i < 9; i++)
        array[i] = rand() % 100;
    for (i = 0; i < 9; i++)
    {
        least = i;
        for (j = i + 1; j < 10; j++)
            if (array[j] < array[least])
                least = j;
        temp = array[i];
        array[i] = array[least];
        array[least] = temp;
    }
    for (i = 0; i < 10; i++)
        printf("%d ", array[i]);
    printf("\n");
    printf("최소값은 %d이고 최대값은 %d입니다.", array[0], array[9]);
}