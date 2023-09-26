#include <iostream>
#define N 10
using namespace std;

int *multi(int *);

int MultiReturn() {
    int a[N] = {0}, *x;
    x=multi(a);
    cout << "함수 호출 후: ";
    for (int i=0; i<N; i++) {
        cout << x[i] << " ";
    }
    return 0;
}

int *multi(int *a) {
    for (int i = 0; i < N; i++) {
        a[i] = i * 10 + 1;
//        *(a+i) = i * 10 + 1;
    }
    return a;
}

