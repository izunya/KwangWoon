#include <stdio.h>

void reverse(){
    char c;
    scanf("%c", &c);
    if(c != '\n'){
        reverse();
        printf("%c", c);
    }
}

int main(){
    printf("문장을 입력하시오: ");
    reverse();
    return 0;
}