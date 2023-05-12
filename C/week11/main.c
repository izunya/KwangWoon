#include <stdio.h>

int global;

void sub(void);

int main(void){
    global = 100;
    printf("before global=%d\n", global);
    sub();
    printf("after global=%d\n", global);
    return 0;
}