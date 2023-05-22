#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 6
#define COLS 6
#define SIZE 3

// 2차원 배열의 특정 구역의 합을 계산하는 함수
int calculateSum(int matrix[ROWS][COLS], int startRow, int startCol) {
    int sum = 0;
    for (int i = startRow; i < startRow + SIZE; i++) {
        for (int j = startCol; j < startCol + SIZE; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int oilField[ROWS][COLS];
    srand(time(NULL));

    // 석유 매장량을 난수로 생성하여 배열에 저장
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            oilField[i][j] = rand() % 100; // 매장량은 0부터 99까지의 난수로 생성
        }
    }

    int maxSum = 0;
    int maxRow, maxCol;

    // 가장 매장량이 많은 3x3 구역을 찾음
    for (int i = 0; i < ROWS - SIZE + 1; i++) {
        for (int j = 0; j < COLS - SIZE + 1; j++) {
            int sum = calculateSum(oilField, i, j);
            if (sum > maxSum) {
                maxSum = sum;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // 결과 출력
    printf("가장 매장량이 많은 3x3 구역:\n");
    for (int i = maxRow; i < maxRow + SIZE; i++) {
        for (int j = maxCol; j < maxCol + SIZE; j++) {
            printf("%d ", oilField[i][j]);
        }
        printf("\n");
    }
    printf("매장량의 합: %d\n", maxSum);

    return 0;
}
