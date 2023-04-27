#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pick,digit1, digit2, result, resultd1, resultd2;

    srand(time(NULL));
    result = 0;

    printf("복권 번호를 입력하시오(0에서 99사이): ");
    scanf("%d", &pick);

    result = 12;

    digit1 = pick / 10;
    digit2 = pick % 10;

    resultd1 = result / 10;
    resultd2 = result % 10;

    if(pick == result){
        printf("100만원 입니다.");
    }else if(digit1 == resultd1 || digit2 == resultd2) {
        printf("50만원 입니다.");
    }else{
        printf("상금이 없습니다.");
    }

    printf("%d %d %d %d %d", digit1, digit2, resultd1, resultd2, result);

    return 0;
}