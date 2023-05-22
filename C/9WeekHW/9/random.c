#define SEED 17
int MULT= 25173;
int INC= 13849;
int MOD = 65536;

static unsigned int seed = SEED;

unsigned random_i(){
    seed = (MULT * seed + INC) % MOD;
    return seed;
}

double random_d(){
    seed = (MULT * seed + INC) % MOD;
    return seed / (double)MOD;
}

// main.c
#include <stdio.h>

extern unsigned random_i();
extern double random_d();

extern int MOD;

int main(void){
    int i;
    MOD = 32767;
    for(i = 0; i < 10; i++){
        printf("%d ", random_i());
    }
    printf("\n");
    return 0;
}