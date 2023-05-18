#include "stdio.h"
#define SIZE 10

void seq_search(){
    int lists[SIZE] = { 5,4,8,9,2,1,10,3,7,6};
    for(int i = 0; i < SIZE; i++){
        printf("%d ",lists[i]);
    }
    int i,key;
    printf("\n찾을 값: ");
    scanf("%d",&key);
    for(i = 0; i < SIZE; i++){
        if(lists[i] == key){
            printf("%d는 %d번째에 있습니다.\n",key,i+1);
            break;
        } else if(i == SIZE-1){
            printf("%d는 없습니다.\n",key);
        }
    }
}