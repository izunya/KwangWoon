#include <stdio.h>

int main(void) {
    int a;
    double b;
    char c;

    printf("int size:%d, double size:%d, char size:%d\n",sizeof(a),sizeof(b), sizeof('c'));
    // sizeof()는 괄호안의 데이터의 크기를 바이트 수로 출력
    return 0;
}
