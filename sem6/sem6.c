#include "stdio.h"
#include "math.h"

void insert_Arr(int Arr[],int size);

int main(){
    
    const int size=10;
    int Arr[size]={};
    insert_Arr(Arr,size);

    return 0;
}

void insert_Arr(int Arr[],int size){
    for(short i=0; i<size; i++){
        printf("\n %d)",i+1);
        scanf(" %d",&Arr[i]);
    }
}