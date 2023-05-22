#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void){
    int freq[SIZE] = {0};
    int i;

    for(i = 0; i < 10000; i++){
        ++freq[rand() % 6];
    }
    printf("================\n");
    printf("숫자\t빈도\n");
    printf("================\n");

    for(i = 0; i < SIZE; i++){
        printf("%3d\t%3d \n", i + 1, freq[i]);
    }
}