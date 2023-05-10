#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int a, int b)
{
    return a + rand() % (b - a + 1);
}

int main()
{
    int i;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++)
    {
        printf("%d ", randint(10, 90));
    }

    printf("\n");

    return 0;
}
