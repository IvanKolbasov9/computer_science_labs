#include "math.h"
#include "stdio.h"
#include "stdlib.h"


void init_matr(int **arr, short col, short row);
void print_matr(int **arr, short col, short row);

int main() {
  int col, row;
  printf("Enter amount of rows and columns\n");
  scanf("%d%d", &row, &col);
  printf("%d %d\n", row, col);

  int **matr = (int **)malloc(row * sizeof(int *));
  for (int i = 0; i < row; i++) {
    matr[i] = (int *)malloc(col * sizeof(int));
  }

  init_matr(matr, col, row);
  print_matr(matr, col, row);

  for (int i = 0; i < row; i++) {
    free(matr[i]);
  }
  free(matr);
  return 0;
}

void init_matr(int **matr, short col, short row) {
  printf("\n Enter array values");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &matr[i][j]);
    }
    // printf("\n");
  }
}

void print_matr(int **matr, short col, short row) {
  for (short i = 0; i < row; i++) {
    for (short j = 0; j < col; j++) {
      printf("%d ", matr[i][j]);
    }
    printf("\n");
  }
}
