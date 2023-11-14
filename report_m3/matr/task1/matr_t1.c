#include "stdio.h"
#include "math.h"
#include "stdlib.h"

void init_matr(int** arr, short side);
void print_matr(int** arr, short side);


int main(){
    int side;
    printf("Enter length of side\n");
    scanf("%d", &side);
    printf("%d \n", side);

    int **matr = (int**)malloc(side * sizeof(int*));
        for(int i = 0; i < side; i++){
            matr[i]=(int*)malloc(side*sizeof(int));
        }   

        init_matr(matr,side);
        print_matr(matr,side);


    for(int i = 0; i < side; i++){
        free(matr[i]);
    }
    free(matr);
    return 0;
}

void init_matr(int** matr, short side){
    printf("\n Enter array values");
    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            scanf("%d", &matr[i][j]);
        }
        //printf("\n");
    }
}

void print_matr(int** matr, short side){
    for(short i = 0; i < side; i++){
        for(short j = 0; j < side; j++){
            printf("%d ", matr[i][j]);
        }
        printf("\n");
    }
}
