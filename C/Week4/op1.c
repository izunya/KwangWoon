#include <stdio.h>

int main(void){
    int result;
    int inA, inB;

    printf("정수 두개: ");
    scanf("%d %d", &inA, &inB);

    result = inA % inB;
    printf("%d%%%d = %d\n", inA, inB, result);

    return 0;
}