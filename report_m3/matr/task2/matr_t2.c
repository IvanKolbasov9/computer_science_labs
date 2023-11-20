#include "stdio.h"
#include "math.h"
#include "stdlib.h"

void init_matr(int** arr, short col, short row);
void print_matr(int** arr, short col, short row);
void swap_columns(int** matr, int col, int row);


int main(){
    int col, row, user_i, user_j;
    printf("Enter amount of rows and columns\n");
    scanf("%d%d", &row, &col);
    
    int **matr = (int**)malloc(row * sizeof(int*));
        for(int i = 0; i < row; i++){
            matr[i]=(int*)malloc(col*sizeof(int));
        }   

        init_matr(matr, col, row);
        print_matr(matr, col, row);
        swap_columns(matr, col, row);

    for(int i = 0; i < row; i++){
        free(matr[i]);
    }
    free(matr);
    return 0;
}

void init_matr(int** matr, short col, short row){
    printf("\n Enter array values");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matr[i][j]);
        }
    }
}

void print_matr(int** matr, short col, short row){
    for(short i = 0; i < row; i++){
        for(short j = 0; j < col; j++){
            printf("%3d ", matr[i][j]);
        }
        printf("\n");
    }
}
void swap_columns(int** matr, int col, int row){
     int user_i, user_j, buf;
     printf("\n Enter i and j values");
     scanf("%d%d",&user_i, &user_j);
     if(user_i >= col || user_j >= col){
        printf("fatal error: i or j is not correct.");
        return ;
     }
     for(short i = 0; i < row; i++){
        buf = matr[i][user_i];
        matr[i][user_i] = matr[i][user_j];
        matr[i][user_j] = buf;
     }
     print_matr(matr, col, row);
}