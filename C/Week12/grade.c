#include "stdio.h"
#define N 3

void sor(int n);

void grade(){
    char name[N][11];
    int scr[N][5];
    double svg[N];

    printf("%d명의 데이터 입력\n",N);
    for(int i = 0; i < N; i++){
        scanf("%s %d %d %d", name[i], sizeof(name[i]), &scr[i][0], &scr[i][1], &scr[i][2]);
        scr[i][3] = scr[i][0] + scr[i][1] + scr[i][2];
        svg[i] = scr[i][3] / 3.;
    }

    for(int i = 0; i <N; i++){
        scr[i][4] = 1;
        for(int j = 0; j < N; j++){
            if(scr[i][3] < scr[j][3]){
                scr[i][4]++;
            }
        }
    }
    printf("\n");
    sor(42);
    for(int i =0; i < 18; i++) printf(" ");
    printf("성적표\n");
    sor(42);
    printf("%-10s %4s %4s %4s %4s %6s %4s\n","이름","국어","영어","수학","총점","평균","석차");
    sor(42);
    for(int i = 0; i<N; i++){
        printf("%-10s %4d %4d %4d %4d %6.2lf %4d\n", name[i], scr[i][0], scr[i][1], scr[i][2], scr[i][3], svg[i], scr[i][4]);
    }
    sor(42);
}

void sor(int n){
    for(int i =0; i<n; i++) printf("=");
    printf("\n");
}