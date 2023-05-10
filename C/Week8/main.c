#include <stdio.h>

void fact(int);

int main() {
    int in, res=1;
    printf("fact수 입력: ");
    scanf("%d", &in);
//    res = fact(in);
    for(int i = 1; i<= in; i++){
        res *= i;//res=res*i
    }
    printf("%d!=%d\n", in, res);
    return 0;
}

//void fact(int i){
//    if(i <= 1)
//        return 1;
//    else
//        return i * fact(i-1);
//}