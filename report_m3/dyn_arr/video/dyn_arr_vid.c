#include "stdio.h"
#include "math.h"
#include <stdlib.h>

int* input_arr(int size);
void print_arr(int* arr, int size);
int find_min(int* arr, int size, int* index_min);
int find_max(int* arr, int size, int* index_max);
void change_min_max(int* arr, int index_min, int index_max);

int main(){
    int size, min, max, index_min, index_max;
    int* arr;

    printf("\n Enter array size: ");
    scanf("%d",&size);
    arr = input_arr(size);
    print_arr(arr, size);
    min = find_min(arr, size, &index_min);
    printf("\nmin: %d",min);
    max = find_max(arr,size, &index_max);
    printf("\nmax: %d",max);
    change_min_max(arr, index_min, index_max);
    print_arr(arr, size);

    free(arr);
    return 0;
}

int* input_arr(int size){
    int* arr = (int*)malloc(size*sizeof(int));
    printf("\n Enter array values: ");
    for(short i = 0; i < size; i++){
        printf("\n(%d) ", i+1);
        scanf("%d", &arr[i]);

    }
    return arr;
}
void print_arr(int* arr, int size){
    printf("\n");
    for(short i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int find_min(int* arr, int size, int* index_min){
    int target = arr[0];
    *index_min = 0;
    for(short i = 0; i < size; i++){
        if(arr[i] < target){
            target = arr[i];
            *index_min = i;
        } 
    }
    return target;
}

int find_max(int* arr, int size, int* index_max){
    int target = arr[0];
    *index_max = 0;
    for(short i = 0; i < size; i++){
        if(arr[i] > target){
            target = arr[i];
            *index_max = i;
        } 
    }
    return target;
}

void change_min_max(int* arr, int index_min, int index_max){
    int buf = arr[index_min];
    arr[index_min] = arr[index_max];
    arr[index_max] = buf;
}