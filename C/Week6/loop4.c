#include <stdio.h>

int main() {
    int sum = 0;
    for( int i = 0; i <= 10; i++){
        if(i%2==0) continue;
        printf("%d\n", i);
        sum += i;
    }
    printf("1~10합: %d\n", sum);
}