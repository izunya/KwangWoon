#include <stdio.h>
int num1, num2;
char c;			// 전역변수

void plus() {
	static int cnt = 1;	// 정적 지역 변수
	printf("덧셈은 총 %d번 실행되었습니다.",cnt);
	printf("\n연산 결과: %d\n", num1 + num2);
	cnt++;
}
void minus() {
	static int cnt = 1; // 정적 지역 변수
	printf("뺄셈은 총 %d번 실행되었습니다.", cnt);
	printf("\n연산 결과: %d\n", num1 - num2);
	cnt++;
}
void multiple() {
	static int cnt = 1; // 정적 지역 변수
	printf("곱셈은 총 %d번 실행되었습니다.", cnt);
	printf("\n연산 결과: %d\n", num1 * num2);
	cnt++;
}
void division() {
	static int cnt = 1; // 정적 지역 변수
	printf("나눗셈은 총 %d번 실행되었습니다.", cnt);
	printf("\n연산 결과: %d\n", num1 / num2);
	cnt++;
}
int main(void){
	while(1){
		printf("연산을 입력하세요: ");
		scanf("%d%c%d", &num1, &c, &num2);
		switch (c) {
			case '+':
				plus();
				break;
			case '-':
				minus();
				break;
			case '*':
				multiple();
				break;
			case '/':
				division();
				break;
		}
	}
	return 0;
}