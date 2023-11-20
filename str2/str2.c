#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *init_str();

int main() {
  short count, i_long = 0, i_max = 0, i_min = 0, count2 = 0;
  char *str1 = init_str();
  char *p2 = strchr(str1, ' ');
  while (p2 != NULL) {
    if (p2 != str1 && p2[-1] != ' ')
      count++;

    p2 = strchr(p2 + 1, ' ');
  }
  printf("\ncount: %d \n amount of words: %d", count, count + 1);
  char **arr_str = (char **)malloc((count + 1) * sizeof(char *));
  for (short i = 0; i < count + 1; i++)
    arr_str[i] = (char *)malloc(51 * sizeof(char));
  // char* p1 = str1;

  short j = 0, k = 0;
  for (short i = 0; i < strlen(str1) - 1; i++) {
    if (str1[i] != ' ') {
      arr_str[j][k] = str1[i];
      k++;
    } else if (str1[i] == ' ' && str1[i + 1] != ' ' && k != 0) {
      arr_str[j][k] = '\0';
      j++;
      k = 0;
    }
  }
  arr_str[j][k] = '\0';
  int *A = (int *)malloc((count + 1) * sizeof(int));
  for (short i = 0; i < count + 1; i++)
    printf("\n word %d: %s", i + 1, arr_str[i]);
  for (int i = 1; i < count + 1; i++) {
    if (strlen(arr_str[i]) > strlen(arr_str[i_long]))
      i_long = i;
    if (strcmp(arr_str[i], arr_str[i - 1]) < 0)
      i_min = i;
    if (strcmp(arr_str[i], arr_str[i - 1]) > 0)
      i_max = i;
    short flag2 = 1;
    short a_size = strlen(arr_str[i]);
    for (short a = 0; a < a_size; a++) {
      if (arr_str[i][a] != arr_str[i][a_size - a])
        flag2 = 0;
    }
    if (flag2 == 1) {
      A[count2] = i;
      count2++;
    }
  }
  printf("\ncount2: %d", count2);
  printf("\n The longest word: %s\n The highest word: %s\n The lowest word: %s",
         arr_str[i_long], arr_str[i_min], arr_str[i_max]);
  printf("\n Polindroms: ");
  for (short i = 0; i < count2; i++)
    printf("\n %d ", A[i]);
  free(str1);
}

char *init_str() {
  char *str1 = (char *)malloc(51 * sizeof(char));
  printf("\nEnter string: ");
  fgets(str1, 50, stdin);
  return str1;
}