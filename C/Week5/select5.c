#include <stdio.h>

int main() {

    int score;

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);

    switch (score/10) {
        case 10: // 100
        case 9: // 90 ~ 99
            printf("%d = A\n", score);
            break;
        case 8: // 80 ~ 89
            printf("%d = B\n", score);
            break;
        case 7: // 70 ~ 79
            printf("%d = C\n", score);
            break;
        case 6: // 60 ~ 69
            printf("%d = D\n", score);
            break;
        default: // 0 ~ 59
            printf("%d = F\n", score);
    }

    return 0;
}
