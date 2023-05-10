#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void check_two_primes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
        }
    }
}

int main() {
    int num;
    printf("양의 정수를 입력하시오: ");
    scanf("%d", &num);
    check_two_primes(num);
    return 0;
}
