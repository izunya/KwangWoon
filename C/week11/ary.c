#include <stdio.h>

int main(void) {
//    int s[10] = { 1 }; // 초기화{}, 부분초기화 일부 초기화된 나머지 0[0.0, '\0']으로 셋팅
//
//    printf("배열 s의 시작주소:%#x\n", s);
//
//    for (int i = 0; i < 10; i++){
//        printf("s[%d](%#x)=%d\n", i, &s[i], s[i]);
//    }
//    char s[10] = {'a', 'b', 'v'};
    char s[10] = "abv";
    printf("배열 s의 시작주소:%#x\n", s);
    for (int i = 0; i < 10; i++) {
        printf("s[%d](%#x)=%c[%d]\n", i, &s[i], s[i], s[i]);
    }
    printf("문자열:문자배열을 한번에 출력=>%s\n", s);
    for (int i = 0; i < 4; i++) {
        printf("문자열은 문자배열%d:%c\n", i,"abv"[i]);
    }
    return 0;
}