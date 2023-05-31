#include <stdio.h>

int main() {
    int a = 10; // 일반변수
//    int* ap = &a; // 포인터변수
    int* ap=NULL, *bp = &a;
    int **bbp = &bp;
    ap = &a;

    printf("*ap[a]=%d\n",*ap);
    printf("*bp[a]=%d\n",*bp);
    printf("*bbp[a]=%d\n",**bbp);
    *ap = 100;
    printf("a=%d\n",a);
    *bp = 1000;
    printf("a=%d\n",a);
    **bbp = 10000;
    printf("a=%d\n",a);


//    printf("%d\n",a);
//    printf("%#x\n",&a);
//    printf("%d\n",*a); // 일반변수는 *(포인터연산자) 사용 불가
//
//    printf("%#x\n",ap);
//    printf("%#x\n",&ap);
//    printf("%d\n",*ap);
    return 0;
}
