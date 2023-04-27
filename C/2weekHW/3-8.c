#include <stdio.h>

int main(void){
    // 1
    int ymoney;
    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%d", &ymoney);
    printf("10억을 모으는데 %.2lf년이 걸립니다.\n\n", (double)(1000000000.0 / (ymoney * 10000.0)));

    // 2
    double mile, meter;

    printf("마일을 입력하시오: ", mile);
    scanf("%lf", &mile);
    meter = mile * 1609.0;
    printf("%.2lf 마일은 %.2lf 미터입니다.\n\n", mile, meter);

    // 3
    // 삼각형의 밑변
    double base;
    // 삼각형의 높이
    double height;
    // 삼각형의 넓이
    double area;

    printf("삼각형의 밑변: ");
    scanf("%lf", &base);
    printf("삼각형의 높이: ");
    scanf("%lf", &height);
    area = base * height / 2.0;
    printf("삼각형의 넓이: %.2lf\n\n", area);

    // 4
    // 화씨 온도
    double ftemp;
    // 섭씨 온도
    double ctemp;

    printf("화씨값을 입력하시오: ");
    scanf("%lf", &ftemp);
    ctemp = (ftemp - 32.0) * 5.0 / 9.0;
    printf("섭씨값은 %.2lf도 입니다.\n\n", ctemp);


    // 5
    double x;
    double result;

    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    result = 3 * x * x + 7 * x + 11;
    printf("다항식의 값은 %.2lf\n\n", result);


    // 6

    double weight;
    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%lf", &weight);
    double mweight = weight * 0.17;
    printf("달에서의 몸무게는 %.2lfkg입니다.\n\n", mweight);

    return 0;
}