#include <stdio.h>

int power(int base, int power_raised) {
	if (power_raised != 1) {
		return base * power(base,power_raised-1);
	}
	else {
		return base;
	}
}
int main(void){
	int base, raised;
	printf("밑수: ");
	scanf("%d", &base);
	printf("지수: ");
	scanf("%d", &raised);

	printf("%d^%d = %d", base, raised, power(base, raised));
	return 0;
}