#include <stdio.h>
#include <math.h>

void pmn();

int main(){
    int cnt = 4, lcnt =0;
    printf("prime number:%d\n", 2);
    printf("prime number:%d\n", 3);
    printf("prime number:%d\n", 5);
    printf("prime number:%d\n", 7);
    for(int i = 0; i <= 100; i++){
        lcnt++;
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i != 1){
            printf("prime number:%d\n", i);
            cnt++;
        }
    }
    printf("prime number count:%d\n", cnt);
    printf("loop count:%d\n", lcnt);
}

void pmn(){
    int cnt = 0, lcnt = 0;
    for(int i = 2; i <= 100; i++){
        int sw = 0;
        for(int j = 2; j <= sqrt(i); j++){
            lcnt++;
            if(i % j == 0){
                sw = 1;
                break;
            }
        }
        if(sw == 0){
            printf("Prime Number: %d\n", i);
            cnt++;
        }
    }
    printf("Prime Number Count: %d\n", cnt);
    printf("Loop Count: %d\n", lcnt);
}