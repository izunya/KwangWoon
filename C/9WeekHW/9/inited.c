#include <stdio.h>
#include <stdlib.h>

void hw_init();

int inited = 0;

int main(){
    hw_init();
    hw_init();
    hw_init();
}

void hw_init(){
    if (inited == 0) {
        printf("hw_init(): 네트워크 장치를 초기화하니다. \n");
        inited = 1;
    }
    else{
        printf("hw_init(): 이미 초기화되었으므로 초기화하지 않습니다.\n");
    }
}