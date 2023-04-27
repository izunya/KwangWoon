#include <stdio.h>

int main() {
    int year;

    printf("년도: ", year);
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){ // 4의 배수이면서 100의 배수가 아니거나 400의 배수이면 윤년
        printf("%d 년=윤년\n", year);
    }else{ // 그 외에는 평년
        printf("%d 년=평년\n", year);
    };

    if(year % 4 == 0){ // 4의 배수이면 윤년
        if(year % 100 != 0){
            printf("%d 년=윤년\n", year);
        }
        else if(year % 400 == 0){
            printf("%d 년=윤년\n", year);
        }
        else{
            printf("%d 년=평년\n", year);
        }
    }else{ // 그 외에는 평년
        printf("%d 년=평년\n", year);
    }

    return 0;
}