#include <stdio.h>

int main(void) {
    int ch = 66;

    printf("%c=%d\n", ch, ch);

    ch = 127;
    printf("127 1큰수: %d, 2큰수: %d\n", ch + 1, ch + 2);
    ch = -128;
    printf("-128 1작은수: %d, 2작은수: %d\n", ch - 1,ch - 2);
    return 0;
}