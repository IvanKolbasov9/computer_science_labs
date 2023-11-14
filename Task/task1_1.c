#include "stdio.h"
#include "math.h"
#include <stdbool.h>
#define k 5

bool fun();

int main(){
    int count;
    int C[k];
    int Arr[k];
    printf("\nEnter values");
    
    for(int i=0;i<k;i++ ){
        printf("\n %d) ",i+1);
        scanf(" %d",&C[i]);
    }

    for (int i=0;i<k;i++){
        if(C[i]>0&&C[i]%2==5){           
            Arr[count]=C[i];
            printf("\n %d) %d",count+1,Arr[count]);
            count++;
            
        }
    }

    printf("%d",fun());
    return 0;
}


bool fun(){
return 0;
}