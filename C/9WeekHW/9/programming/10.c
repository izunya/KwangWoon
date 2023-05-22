#include <stdio.h>

// 1/1+1/2+1/3+...+1/n
// return 1.0/n + recursive(n-1)

double sum(int n){
    if (n == 1) return 1.0;
    return 1.0/n + sum(n-1);
}

int main(){
    printf("%f\n", sum(10));
    return 0;
}