#include <stdio.h>

int sum(int num) {
	if (num != 0)
		return num + sum(num - 1);
	else
		return num;
}
int main(void){
	int num, result;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	result = sum(num);
	printf("1부터 %d까지의 합 = %d",num, result);
	return 0;
}