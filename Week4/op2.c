#include <stdio.h>

int main(void){
    int result;
    int inA;

    printf("정수: ");
    scanf("%d", &inA);

    // (조건) ? 참 : 거짓
    (inA % 2 == 0) ? printf("짝수\n") : printf("홀수\n");

    printf("++inA=%d\n", ++inA);

    printf("++%d = %d\n", inA, ++inA);
    printf("%d++ = %d\n", inA, inA++);
    printf("inA==%d\n", inA);
    return 0;
}