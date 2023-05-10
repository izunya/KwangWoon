#include <stdio.h>
#include <math.h>

double get_distance(double, double, double, double);

int main()
{

    int x_1, x_2, y_1, y_2;

    double distance;

    printf("첫번째 점의 좌표를 입력하시오:(x,y)");

    scanf("%d %d", &x_1, &y_1);

    getchar();

    printf("두번째 점의 좌표를 입력하시오:(x,y)");

    scanf("%d %d", &x_2, &y_2);

    distance = get_distance(x_1, x_2, y_1, y_2);

    printf("두 점 사이의 거리는 %lf입니다.", distance);

    return 0;
}

double get_distance(double x_1, double x_2, double y_1, double y_2)

{

    return sqrt((x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2) * (y_1 - y_2));
}