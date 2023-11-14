#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "malloc.h"

int main(){
    short size=10, flag=0, count=0;
    int *arr = malloc(size * sizeof(int));
    printf("erggre");

    while(flag==0){
        scanf("%d ",&arr[count]);
        count++;
        if(arr[count]==-2e9){
            flag=1;
        }
        if(count==size-1){
            arr = realloc(arr, (size + 10) * sizeof(int));
            size+=10;
        }
    }
    for(short i=0; i<count; i++){
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;
}

