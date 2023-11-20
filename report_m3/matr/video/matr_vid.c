#include "stdio.h"
#include "math.h"
#include "stdlib.h"

void init_matr(int** arr, short col, short row);
void print_matr(int** arr, short col, short row);
double find_sr_arifm(int** matr, short col, short row);
void change_matr(int** matr, int col, int row);

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
    change_matr(matr, col, row);


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

double find_sr_arifm(int** matr, short col, short row){
    double sr =0;
    int count = 0;
    for(short i = 0; i < row; i++){
        for(short j = 0; j < col; j++){
            if(matr[i][j] % 2 == 0){
                sr+= matr[i][j];
                count++;
            }
        }
    }
    printf("\n sum: %d",sr);
    printf("\n count: %d",count);
    sr = sr/count;
    printf("\n sr: %d",sr);
    return sr;
}
void change_matr(int** matr, int col, int row){
    double sr = find_sr_arifm(matr, col, row);
    int user_i, user_j, buf;
    printf("\n Enter i and j values");
    scanf("%d%d", &user_i, &user_j);
    if(user_i > col || user_j > col){
        printf("fatal error: i or j is not correct.");
        return ;
    }
    for(short i = 0; i < row; i++){
        for(short j = 0; j < col; j++){
            if(matr[i][j] < sr) matr[i][j] = 0;
        }
        buf = matr[i][user_i-1];
        matr[i][user_i-1] = matr[i][user_j-1];
        matr[i][user_j-1] = buf;
    }
    print_matr(matr, col, row);
}