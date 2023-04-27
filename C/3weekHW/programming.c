#include <stdio.h>

int main(void) {

    // 1
    double a;
    printf("실수를 입력하시오: ");
    scanf("%lf", &a);
    printf("실수형식으로는 %f입니다.\n지수형식으로는 %e입니다.\n\n", a, a);

    // 2
    int b;
    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &b);
    printf("8진수로는 %#o입니다.\n10진수로는 %d입니다.\n16진수로는 %#x입니다.\n\n", b, b, b);

    // 3
    int x = 10, y = 20;
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("x = %d, y = %d\nx = %d, y = %d\n\n", y, x, x, y);

    // 4
    double length, width, height;
    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &length, &width, &height);
    printf("상자의 부피는 %f입니다.\n\n", length * width * height);

    // 5
    double pyung, m2;
    double SQMETER_PER_PYUNG = 3.3058;

    printf("평을 입력하시오: ");
    scanf("%lf", &pyung);
    m2 = pyung * SQMETER_PER_PYUNG;
    printf("%f평방미터입니다.\n\n", m2);

    // 6
    double sam = 3.32e-3;
    double gu = 9.76e-8;
    printf("%f\n\n", sam + gu);

    // 7
    double m, v, result;
    printf("질량(kg): ");
    scanf("%lf", &m);
    printf("속도(m/s): ");
    scanf("%lf", &v);
    result = 0.5 * m * v * v;
    printf("운동에너지: %f\n\n", result);

    // 8
    int ascii;
    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &ascii);
    printf("문자:%c입니다.\n\n", ascii);

    // 9
    printf("%c %c %c\n\n", 'a'+1, 'a'+2, 'a'+3);
    // 아스키코드에서 a는 97이므로 1을 더하면 b, 2를 더하면 c, 3을 더하면 d가 된다.

    // 10
    printf("\a");
    printf("화재가 발생했습니다.\n\n");
    printf("\a");

    // 11
    printf("%s %c %c %c\n", "ASCII code", 'A', 'B', 'C');
    printf("\\t \\a \\n\n\n");

    // 12
    int i = 255;
    printf("%d\n",i);
    printf("%o %x\n", i, i);
    i = -1;
    printf("%x",i);
    printf("%x %x", i-1, i-2);

    return 0;
}