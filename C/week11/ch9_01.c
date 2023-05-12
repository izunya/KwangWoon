#include <stdio.h>


int main() {
    int a = 10, b = 20, c = 50;

    printf("a=%d, b=%d, c=%d\n", a, b, c); // 10 20 50
    {
        int b = 100, c = 200;
        a = a + 5;
        printf("a=%d, b=%d, c=%d\n", a, b, c); // 15 100 200
        {
            int c = 3000;
            printf("a=%d, b=%d, c=%d\n", a, b, c); // 15 100 3000
            b = c;
        }
        printf("a=%d, b=%d, c=%d\n", a, b, c); // 15 3000 200
    }
    printf("a=%d, b=%d, c=%d\n", a, b, c); // 15 20 50

    return 0;
}
