#include <stdio.h>

int fib(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}
int main(void){
	int i;
	for (i = 0; i < 10; i++)
		printf("fib(%d)=%d\n", i, fib(i));
	return 0;
}