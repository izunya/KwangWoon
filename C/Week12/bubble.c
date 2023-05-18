#include <stdio.h>
#define SIZE 7

void bubble(){
    int lists[SIZE] = { 5,4,8,9,2,1,10};
    int temp;
    for(int i = 0; i < SIZE-1; i++){
        int sw = 0;
        for(int j = 0; j < SIZE-1-i; j++){
            if(lists[j] > lists[j+1]){
                sw = 1;
                temp = lists[j];
                lists[j] = lists[j+1];
                lists[j+1] = temp;
            }
        }
        if (sw == 0) break;
        printf("%d회차\t",i+1);
        for(int j = 0; j < SIZE; j++){
            printf("%2d ",lists[j]);
        }
        printf("\n");
    }
    return;
}

void bubble_i(){
    int lists[SIZE];
    printf("%d개 데이터: ",SIZE);
    for(int i = 0; i < SIZE; i++){
        scanf("%d",&lists[i]);
    }
    int temp;
    for(int i = 0; i < SIZE-1; i++){
        int sw = 0;
        for(int j = 0; j < SIZE-1-i; j++){
            if(lists[j] > lists[j+1]){
                sw = 1;
                temp = lists[j];
                lists[j] = lists[j+1];
                lists[j+1] = temp;
            }
        }
        if (sw == 0) break;
        printf("%d회차\t",i+1);
        for(int j = 0; j < SIZE; j++){
            printf("%2d ",lists[j]);
        }
        printf("\n");
    }
    return;
}

void bubble_u(){
    int usize = 0;
    printf("데이터의 크기: ");
    scanf("%d",&usize);
    int res[usize];
    int temp;
    printf("%d개 데이터: ",usize);
    for(int i = 0; i < usize; i++){
        scanf("%d",&res[i]);
    }
    for(int i = 0; i < usize-1; i++){
        int sw = 0;
        for(int j = 0; j < usize-1-i; j++){
            if(res[j] > res[j+1]){
                sw = 1;
                temp = res[j];
                res[j] = res[j+1];
                res[j+1] = temp;
            }
        }
        if (sw == 0) break;
        printf("%d회차\t",i+1);
        for(int j = 0; j < usize; j++){
            printf("%2d ",res[j]);
        }
        printf("\n");
    }
}