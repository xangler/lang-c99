#include <stdio.h>
#include <stdlib.h>
#include "header/sort.h"
#define N 6

int main(void){
    int i;
    int arr[N]={32,12,7, 78, 23,45};

    printf("排序前 \n");
    for(i=0;i<N;i++)
        printf("%d\t",arr[i]);
    quick_sort(arr,0,N-1);

    printf("\n 排序后 \n");
    for(i=0; i<N; i++)
        printf("%d\t", arr[i]);
    printf ("\n");
    return 0;
}