#include <stdio.h>

int main(void){
    char ch;

    printf("문자를 입력하시오: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("입력한 %c는 대문자입니다.\n", ch);
    }else if(ch >= 'a' && ch <= 'z'){
        printf("입력한 %c는 소문자입니다.\n", ch);
    }else if(ch >= '0' && ch <= '9'){
        printf("입력한 %c는 숫자입니다.\n", ch);
    }else{
        printf("입력한 %c는 기타문자입니다.\n", ch);
    }
    return 0;
}