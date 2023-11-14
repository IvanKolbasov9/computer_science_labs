#include "stdio.h"
#include "math.h"
#define SIZE 10

void initArr(int Arr[], short *user_size);
void Arr_print(int Arr[], short user_size);
int max_min(int Arr[], short user_size);
int max_even(int Arr[], short user_size);

int Arr[SIZE]={};
short  user_size, ans1, ans2;

int main(){
    int Arr[SIZE];
    short  user_size;

    initArr(Arr, &user_size);
    
    Arr_print(Arr,user_size);

    ans1=max_min(Arr,user_size);
    printf("\n ans1 %d",ans1);

    ans2=max_even(Arr,user_size);
    printf("\n ans2 %d",ans2);


}






void initArr(int Arr[], short *user_size){
    short flag1=0;

    printf("\n Enter array size: ");
    while(flag1==0){
        scanf("\n %d", user_size);
        (*user_size<1 || *user_size> SIZE) ? printf("\n Enter enohter value") : flag1++;
    }

    printf("Enter values ");
    
    for(short i=0; i < *user_size; i++){
        printf("\n %d) ", i+1);
        scanf("\n %d", &Arr[i]);
    }
}


void Arr_print(int Arr[], short user_size){
    for(short i=0; i<user_size; i++){
        printf("\n (%d)  %d) %d", i, i+1, Arr[i]);    
    } 
}

int max_min(int Arr[], short user_size){
    int target=1;
    for(short i=1; i<user_size; i++){
        if(i%2!=0){ target*=Arr[i];}
        
    }
    return target;
}
int max_even(int Arr[], short user_size){
    int target, flag=0;
    for(short i=1 ; i<user_size; i++){
        if(Arr[i]%2==0 && flag==0){ 
            target=Arr[i];
            flag=1;
        }
    }
    if(flag==0){return Arr[0];}
    for(short i=1 ; i<user_size; i++){
        if(Arr[i]%2==0 && Arr[i]<target){ 
            target=Arr[i];
        }
    }
    return target;
}