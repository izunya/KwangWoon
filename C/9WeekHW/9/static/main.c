#include <stdio.h>

// extern void f1(); // sub.c에서 정의한 static 함수이므로 sub.c에서만 사용 가능하다.
extern void f2();

int main(void){
    f2();
    return 0;
}