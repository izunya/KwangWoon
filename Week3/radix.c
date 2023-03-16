#include <stdio.h>

void d2b(int);

int main(void) {
    int dec = 10;

    printf("10:%d 8:%o 16:%x\n", dec, dec, dec);
    printf("10:%d 8:%#o 16:%#x\n", dec, dec, dec);
    printf("10:%d 8:%#o 16:%#X\n", dec, dec, dec);
    // 2진수로 출력
    printf("2:");
    d2b(dec);
    printf("\n");
    return 0;
}

void d2b(int dec) {
    if(dec > 0) {
        d2b(dec / 2);
        printf("%d", dec % 2);
    }
    else
        return;
}