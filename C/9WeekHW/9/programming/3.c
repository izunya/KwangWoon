#include <stdio.h>
#define password 1234

int check() {
	static int cnt = 0;
	int num;
	if (cnt == 3) {
		printf("로그인 시도횟수 초과");
		return 1;
	}
	printf("비밀번호: ");
	scanf("%d", &num);
	if (num == password) {
		printf("로그인 성공");
		return 0;
	}
	else {
		cnt++;
	}
	return 1;
}
int main(void){
	for (int i = 1; i <= 4; i++) {
		if (check() == 0) // 로그인이 성공하면 반복 종료
			break;
	}
	return 0;
}