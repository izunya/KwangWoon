#include <stdio.h>
#define ROWS 8
#define COLS 10

int image[ROWS][COLS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

void display(int image[ROWS][COLS]){
    int r,c;
    for(r=0;r<ROWS;r++){
        for(c=0;c<COLS;c++){
            if(image[r][c] == 1){
                printf("_");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

void inverse(int img[ROWS][COLS]){
    for(int r=0;r<ROWS;r++){
        for(int c=0;c<COLS;c++){
            if(img[r][c] == 1){
                img[r][c] = 0;
            }
            else{
                img[r][c] = 1;
            }
        }
    }
}

int main(){
    printf("변환전 이미지\n");
    display(image);
    inverse(image);
    printf("변환후 이미지\n");
    display(image);
    return 0;
}