#include <stdio.h>

int main() {
    int sum = 0;

    for(int i = 1; i <= 10; i++) {
        printf("%d\n", i);
        sum += i;
    }

    printf("1~10합: %d\n", sum);
    return 0;
}
