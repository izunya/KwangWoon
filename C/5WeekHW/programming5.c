#include <stdio.h>

int main() {
    int a;
    printf("월 번호를 입력하시오: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("Jan\n");
            break;
        case 2:
            printf("Feb\n");
            break;
        case 3:
            printf("Mar\n");
            break;
        case 4:
            printf("Apr\n");
            break;
        case 5:
            prinf("May\n");
            break;
        case 6:
            printf("Jun\n");
            break;
        case 7:
            printf("Jul\n");
            break;
        case 8:
            printf("Aug\n");
            break;
        case 9:
            printf("Sept\n");
            break;
        case 10:
            printf("Oct\n");
            break;
        case 11:
            printf("Nov\n");
            break;
        case 12:
            printf("Dec\n");
            break;
        default:
            printf("일치하지 않는 월 번호입니다.\n");
            break;
    }
    return 0;
}