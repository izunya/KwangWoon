#include <stdio.h>

int balance = 0;

void display_menu() {
    printf("********** Welcome to Express ATM **********\n");
    printf("<1> 잔액\n");
    printf("<2> 입금\n");
    printf("<3> 출금\n");
    printf("<4> 종료\n");
}

void check_balance() {
    printf("현재 잔액은 %d원입니다.\n", balance);
}

void deposit() {
    int amount;
    printf("입금 금액을 입력하시오: ");
    scanf("%d", &amount);
    balance += amount;
    printf("잔고는 %d원입니다.\n", balance);
}

void withdraw() {
    int amount;
    printf("출금 금액을 입력하시오: ");
    scanf("%d", &amount);
    if (balance < amount) {
        printf("잔액이 부족합니다.\n");
    } else {
        balance -= amount;
        printf("출금이 완료되었습니다. 잔액은 %d원입니다.\n", balance);
    }
}

int main() {
    int choice;
    while (1) {
        display_menu();
        printf("메뉴를 선택하시오: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                check_balance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못된 메뉴 선택입니다.\n");
                break;
        }
    }
    return 0;
}
