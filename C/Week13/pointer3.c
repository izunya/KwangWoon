#include <stdio.h>

int main() {
    int a[10] = {5,8,7,4,1,9,6,8,7,3};
    int *ap = a+4;
    ap++;
    printf("*ap++=%d\n", *ap);
    (*ap)++;
    printf("(*ap)++=%d\n", (*ap)++);

    printf("*ap=%d\n", *ap);

    return 0;
}