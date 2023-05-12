#include <stdio.h>

int global; // 전역변수

void func(void);

int main(void) {
    int local = 111; // 지역. 영역내에 생성 후 영역 종료시 소멸, 초기값 널
    printf("before global=%d, local=%d\n", global, local);
    for (int i = 0; i < 5; i++) {
        func();
    }
    printf("after global=%d, local=%d\n", global, local);
}

void func(void) {
    static int sl = 50; // 지역정적변수, 전역변수와 동일. 소멸x, 초기값 0, 초기화 처음 1번
    int local = 10;
    local += 1000000;
    global += 10;
    sl += 100;
    printf("function global=%d local=%d sl=%d\n", global, local, sl);
    return;
}