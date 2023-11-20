#include "stdio.h"
#include "math.h"
#include <stdlib.h>

void init_arr(int *ptr_size, int arr[]);
void task(int arr[],int size);

int main(){
    int size;

    printf("\n Enter array size: ");
    scanf("%d", &size);
    if(size >= 1000 || size < 0){
        printf("fatal error: i or j is not correct.");
        return 0;
    }


    int* arr = (int*)malloc(size * sizeof(int));
    init_arr(&size, arr);
    task(arr,size);
    

    free(arr);
    return 0;
}

void init_arr(int *ptr_size, int arr[]){

    printf("\nEnter array values: ");

    for(short i = 0; i < *ptr_size; i++){
        scanf("%d", &arr[i]);
        if(arr[i] >= 1000 || arr[i] < 0){
        printf("fatal error: i or j is not correct.");
        return ;
        }
    }
    //for(short i = 0; i < *ptr_size; i++){ printf("%d ", arr[i]); }
}

void task(int arr[],int size){
    int x, target;

    printf("\n Enter x: ");
    scanf("%d", &x);
    if(x > fabs(1000)){
        printf("fatal error: 'x' is not correct.");
        return ;
     }

    target = arr[0];

    for(short i = 0; i < size; i++){
        if(fabs(x-arr[i])<fabs(x-target)){
            target=arr[i];
        }
    }
    printf("\n Result: %d",target);
}