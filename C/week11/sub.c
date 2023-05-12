#include <stdio.h>

extern int global;

void sub(void){
    global+=100;
    printf("other file global=%d\n", global);
    return;
}