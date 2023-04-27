#include <stdio.h>

int main(void){
    int socre;

    if(socre >= 90){
        printf("학점 A\n");
    } else if(socre >= 80){
        printf("학점 B\n");
    } else if(socre >= 70){
        printf("학점 C\n");
    } else if(socre >= 60){
        printf("학점 D\n");
    } else {
        printf("학점 F\n");
    }
    return 0;
}