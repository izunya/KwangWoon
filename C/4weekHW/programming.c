#include <stdio.h>

int main(void){
    // 1
    int x,y;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    printf("몫: %d\n", x/y);
    printf("나머지: %d\n\n", x%y);

    // 2
    double dou,ble;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &dou, &ble);

    printf("%.2f %.2f %.2f %2.f\n\n", dou+ble, dou-ble, dou*ble, dou/ble);

    // 3
    int a,b,c;

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("최대값은 %d입니다.\n\n", (a>b)?((a>c)?a:c):((b>c)?b:c));

    // 4
    int cm;

    printf("키를 입력하시오(cm): ");
    scanf("%d", &cm);
    float pit = cm/30.48;
    printf("%dcm은 %d피트 %2.f인치입니다.\n\n", cm, pit, (pit)/2.54);

    // 5
    int num;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    
    printf("십의 자리: %d\n", num/10%10);
    printf("일의 자리: %d\n\n", num%10);

    // 6
    double f,b2;
    f = 1.0-0.9;
    b2= 0.1;

    printf("(1.0-0.9)==0.1은 %d입니다.\n\n", fabs(f-b2)<0.0001);

    // 7
    int su,gup;
    printf("정수를 입력하시오: ");
    scanf("%d", &su);
    printf("2를 곱하고 싶은 횟수: ");
    scanf("%d", &gup);
    printf("%d<<%d의 값: %d\n\n", su, gup, su<<gup);

    // 8
    double half;
    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &half);
    printf("표면적은 %.2f입니다.\n", 4*3.14*half*half);
    printf("체적은 %.2f입니다.\n\n", 4/3*3.14*half*half*half);

    // 9 
    double ac, ae ,bc, de;
    printf("지팡이의 높이를 입력하시오: ");
    scanf("%lf", &ac);
    printf("지팡이의 그림자의 길이를 입력하시오: ");
    scanf("%lf", &ae);
    printf("피라미드까지의 거리를 입력하시오: ");
    scanf("%lf", &bc);

    de = ac*bc/ae;
    printf("피라미드의 높이는 %.2f입니다.\n\n",de);

    // 10
    int xt,yt;
    printf("x 좌표를 입력하시오: ");
    scanf("%d", &xt);
    printf("y 좌표를 입력하시오: ");
    scanf("%d", &yt);

    xt>0 && yt>0 ? printf("1사분면입니다\n\n") : printf(" \n\n");

	xt>0 && yt<0 ? printf("2사분면입니다\n\n") : printf(" \n\n");

	xt<0 && yt<0 ? printf("3사분면입니다\n\n") : printf(" \n\n");

	xt<0 && yt>0 ? printf("4사분면입니다\n\n") : printf(" \n\n");
    // 11
    double x1, y1, r1;

    printf("거리를 입력하시오: ");
    scanf("%lf", &x1);
    printf("각도를 입력하시오: ");
    scanf("%lf", &y1);

    r1 = 360 / y1 * x1 / 2 / 3.14;
    printf("지구의 반지름은 %.2f입니다.\n\n", r1);

    // 12
    char c1, c2, c3, c4;
	unsigned int result = 0x00000000;

	printf("첫번째 문자를 입력하시오: ");
	scanf(" %c", &c1);

	printf("두번째 문자를 입력하시오: ");
	scanf(" %c", &c2);

	printf("세번째 문자를 입력하시오: ");
	scanf(" %c", &c3);

	printf("네번째 문자를 입력하시오: ");
	scanf(" %c", &c4);

	result = result | c1;
	result = result | (c2 << 8);
	result = result | (c3 << 16);
	result = result | (c4 << 24);

	printf("결과값: %x\n", result);
    return 0;
}