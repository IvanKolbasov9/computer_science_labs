#include "stdio.h"
#include "math.h"
#include "stdlib.h"

void def_sequence(int* arr, int count);


int main(){
    short size=10, flag=0, count=0;
    int *arr = (int*)malloc(size * sizeof(int));
    printf("\nEnter erray values:\n");

    while(flag==0){
        scanf("%d",&arr[count]);
        if(arr[count]==-2e9){
            flag=1;
        }
        count++;
        if(count==size-1){
            arr = realloc(arr, (size + 10) * sizeof(int));
            size+=10;
        }
    }

    def_sequence(arr,count);

    free(arr);
    return 0;
}
void def_sequence(int* arr, int count){
    short CONST = 1, ASCEND = 1,W_ASCEND = 1, DESCEND = 1, W_DESCEND = 1;
    for(short i=1; i<count-1; i++){
        if(arr[i] != arr[i-1]){CONST=0;}
        if(arr[i] <= arr[i-1]){ASCEND=0;}
        if(arr[i] < arr[i-1]){W_ASCEND=0;}
        if(arr[i] >= arr[i-1]){DESCEND=0;}
        if(arr[i] > arr[i-1]){W_DESCEND=0;}
    }
    if(CONST == 1){printf("\nCONSTANT");}
    if(ASCEND == 1){printf("\nASCENDING");}
    if(ASCEND == 0 && W_ASCEND == 1 && CONST == 0){printf("\nWEAKLY ASCENDING");}
    if(DESCEND == 1){printf("\nDESCENDING");}
    if(DESCEND == 0 && W_DESCEND == 1 && CONST == 0){printf("\nWEAKLY DESCENDING");}
    if(CONST == 0 && ASCEND == 0 && W_ASCEND == 0 && DESCEND == 0 && W_DESCEND == 0){printf("\nRANDOM");}
}
