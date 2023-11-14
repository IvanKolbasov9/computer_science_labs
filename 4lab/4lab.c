#include "stdio.h"
#include "math.h"

int main(){

    int size, Arr[10]={};

    printf("\n Enter array size!");
    scanf("\n %d",&size);
    printf("\n %d",size);

    for(short i=0; i<size; i++){
        printf("\n (%d) %d)",i,i+1);
        scanf(" %d",&Arr[i]);
    }
    for(short i=0; i<size; i++){
        printf("\n %d",Arr[i]);
    }
    return 0;
}