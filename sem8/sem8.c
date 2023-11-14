#include "stdio.h"
#include "math.h"
#include <stdlib.h>
#include <malloc.h>


int main(){
    int size, target, x;
    printf("\n Enter array size: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    printf("\nEnter array values: ");

    for(short i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\n Enter x ");
    scanf("%d", &x);

    target = arr[0];

    for(short i = 0; i < size; i++){
        if(fabs(x-arr[i])<fabs(x-target)){
            target=arr[i];
        }
    }
    printf("\n %d",target);
    



    free(arr);
    return 0;
}

void init(int *ptr_size, int *ptr_x, int arr[]){

}