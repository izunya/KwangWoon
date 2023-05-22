#include <stdio.h>
void inc(int counter);

int main(void){
    int i =10;

    printf("합수 호출전 i=%d\n",i);
    inc(i);
    printf("함수 호출후 i=%d\n",i);
}

void inc(int counter){
    counter++;
}