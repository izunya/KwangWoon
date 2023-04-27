#include <stdio.h>

int main() {
    int kor, eng, mat, sum;

    double avg;

    printf("각 과목 점수 입력(국어, 영어, 수학) : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    sum = kor + eng + mat;
    avg = sum / 3.0;

    if(avg >= 60){
        if(kor >= 40){
            if(eng >= 40){
                if(mat >= 40){
                    printf("점수: %d %d %d=%d %.2lf 합격\n", kor, eng, mat, sum, avg);
                }else{
                    printf("수학 과락으로 불합격");
                }
            }else{
                printf("영어 과락으로 불합격");
            }
        }else{
            printf("국어 과락으로 불합격");
        }
    }else{
        printf("평균 %.2lf로 60점미만 불합격", avg);
    }

    if(avg >= 60 && kor >= 40 && eng >= 40 && mat >= 40){
        printf("점수: %d %d %d=%d %.2lf 합격\n", kor, eng, mat, sum, avg);
    }else{
        printf("평균 %.2lf로 60점 미만 불합격 또는 %d %d %d로 과락", avg, kor, eng, mat);
    }

    return 0;
}
