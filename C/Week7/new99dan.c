#include <stdio.h>

void line();
void dan();
void title();

int main() {
    title();
    dan();
    return 0;
}

void line(){
    for (int i = 0; i < 56; i++){
        printf("=");
    }
    printf("\n");
}

void dan(){
    for(int i = 1; i <= 9; i++){
        for(int j = 2; j <= 9; j++){
            printf("%2d*%d=%2d", j, i, j*i);
        }
        printf("\n");
    }
    line();
}

void title(){
    line();
    for(int i = 0; i< 25; i++){
        printf(" ");
    }
    printf("구구단\n");
    line();
    for(int i =2; i <=9; i++){
        printf(" %ddan ", i);
    }
    printf("\n");
    line();
}