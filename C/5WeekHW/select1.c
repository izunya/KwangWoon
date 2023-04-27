#include <stdio.h>

int main() {
    int score;
    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    if(score >= 90) printf("%d = A\n", score);
    else if(score >= 80) printf("%d = B\n", score);
    else if(score >= 70) printf("%d = C\n", score);
    else if(score >= 60) printf("%d = D\n", score);
    else printf("%d = F\n", score);
    return 0;
}
