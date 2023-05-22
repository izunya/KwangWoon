#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 45
#define PICK_NUM 6

int main() {
    int lottoNumbers[PICK_NUM];
    int i, j;

    srand(time(NULL));  // 난수 생성을 위한 시드 설정

    // 로또 번호 생성
    for (i = 0; i < PICK_NUM; i++) {
        lottoNumbers[i] = rand() % MAX_NUM + 1;  // 1부터 45까지의 난수 생성
        // 중복된 번호가 나오면 다시 번호 생성
        for (j = 0; j < i; j++) {
            if (lottoNumbers[i] == lottoNumbers[j]) {
                i--;
                break;
            }
        }
    }

    // 로또 번호 출력
    printf("로또 번호: ");
    for (i = 0; i < PICK_NUM; i++) {
        printf("%d ", lottoNumbers[i]);
    }
    printf("\n");

    return 0;
}
