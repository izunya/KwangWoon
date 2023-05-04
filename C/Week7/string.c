#include <stdio.h>

int main(void){
    char name[11];
    char addr[100];

    printf("이름: ");
    scanf_s("%s", name, sizeof(name));
    getchar();
    printf("주소: ");
    gets_s(addr, sizeof(addr));

    printf("입력된 이름:%s\t주소:%s\n", name, addr);

    return 0;

}