#include <stdio.h>
#define SIZE 7

void binSort() {
    int dat[SIZE] = {5, 4, 8, 9, 2, 1, 10};
    int key;
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", dat[i]);
    }
    printf("\n찾는 값: ");
    scanf("%d", &key);
    int first = 0, last = SIZE - 1, mid, sw;
    while (first <= last) {
        sw = 0;
        mid = (first + last) / 2;
        if (dat[mid] == key) {
            printf("%d번에 찾았다. %d\n", mid + 1, dat[mid]);
            sw++;
            break;
        } else if (dat[mid] < key) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    if(sw == 0){
        printf("없다.\n");
    }
}