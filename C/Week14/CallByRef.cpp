#include <iostream>
using namespace std;

void swap(int*,int*);

int CallByRef(){
    int a = 10, b = 90;
    cout << "스왑전 a=" <<a << ", b=" << b << "\n";
    swap(&a,&b);
    cout << "스왑후 a=" <<a << ", b=" << b << "\n";
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "스왑중 a(x)=" << *x << ", b(y)=" << *y << "\n";
}