#include <stdio.h>

int fibo(int in);

int main(){
    int in, res =1;
    printf("피보나치수 입력: ");
    scanf("%d", &in);
    for(int i = in; i >= 1; i--){
        res = fibo(i);
        printf("fibo(%d)=%d\n", in, res);
    }
    printf("fibo(%d)=%d\n", in, res);
    return 0;
}

int fibo(int i){
    if(i<=2)
        return 1;
    else
        return fibo(i-1) + fibo(i-2);
}