#include <stdio.h>

int sum(int, int);

//int main() {
//    int no1, no2, result;
//
//    printf("숫자 두개: ");
//    scanf("%d %d", &no1, &no2);
//    result = sum(no1, no2);
//    printf("두수의 합: %d\n", result);
//    return 0;
//}
//
//int sum(int a, int b){
//    return a+b;
//}

int main(void){
    int no1 ,no2;

    printf("숫자 두개: ");
    scanf("%d %d", &no1, &no2);
    printf("두수의 합: %d\n", sum(no1, no2));
    return 0;
}

int sum(int a, int b){
    int res;
    res = a+b;
    return res;
}