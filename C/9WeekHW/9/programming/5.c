//math.c

double pi = 3.14;

// main.c
#include <stdio.h>

extern double pi;

int main(){
    printf("%f\n", pi);
    return 0;
}
