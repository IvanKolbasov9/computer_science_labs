#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


void init_arr(char **str_arr, int amount);
void print_arr(char **str_arr, int amount);
void find_i_min_max(char **arr_str, int amount, int *i_min, int *i_max);
void print_res_cmp(char **str_arr, int i_min, int i_max);
void find_ch();
void task3();
void task5();

int main() {
  int amount, i_min = 0, i_max = 0;
  // char* str_t2;

  printf("\nEnter amount of strings: ");
  // scanf("%d", &amount);
  fflush(stdin);

  char **str_arr = (char **)malloc(amount * sizeof(char *));
  for (int i = 0; i < amount; i++)
    str_arr[i] = (char *)malloc(51 * sizeof(char));

  // init_arr(str_arr, amount);
  // print_arr(str_arr, amount);
  // find_i_min_max(str_arr, amount, &i_min, &i_max);
  // print_res_cmp(str_arr, i_min, i_max);
  // find_ch();
  // task3();
  task5();

  for (int i = 0; i < amount; i++)
    free(str_arr[i]);
  free(str_arr);
  return 0;
}

void init_arr(char **str_arr, int amount) {
  printf("\nEnter strings (not more than 50 simbols in one string): \n");
  for (int i = 0; i < amount; i++) {
    printf("str %d: ", i + 1);
    fgets(str_arr[i], 50, stdin);
  }
}

void print_arr(char **str_arr, int amount) {
  for (int i = 0; i < amount; i++) {
    printf("\n");
    puts(str_arr[i]);
  }
}

void find_i_min_max(char **arr_str, int amount, int *i_min, int *i_max) {
  for (int i = 1; i < amount; i++) {
    if (strlen(arr_str[i]) > strlen(arr_str[*i_max]))
      *i_max = i;
    if (strlen(arr_str[i]) < strlen(arr_str[*i_min]))
      *i_min = i;
  }
  printf("\nThe shortest string: %s", arr_str[*i_min]);
  printf("\nThe longest string: %s", arr_str[*i_max]);
}
void print_res_cmp(char **str_arr, int i_min, int i_max) {
  int cmp = strcmp(str_arr[i_min], str_arr[i_max]);
  if (cmp = 0)
    printf("\n Strings are equal.");
  else if (cmp < 0)
    printf("\n Short string is higher in ASCII.");
  else
    printf("\n Long string is higher in ASCII.");
}

void find_ch() {
  char ch;
  int count;
  char *str_t2 = (char *)malloc(51 * sizeof(char));
  printf("\nEnter string (not more than 50 simbols): \n");
  fgets(str_t2, 50, stdin);
  printf("\n Enter simbol:");
  scanf("%c", &ch);
  fflush(stdin);

  char *p = strchr(str_t2, ch);
  if (p != NULL)
    p = strchr(p + 1, ch);
  else {
    printf("\n The second occurence of '%c' in string not foundded.", ch);
    return;
  }
  if (p != NULL)
    printf("\n The second occurens of '%c': %s", ch, p);
  else
    printf("\n The second occurence of '%c' in string not foundded.", ch);

  free(str_t2);
}

void task3() {
  int count = 0, j;
  char *str1 = (char *)malloc(51 * sizeof(char));
  char *str2 = (char *)malloc(51 * sizeof(char));
  char *str3 = (char *)malloc(51 * sizeof(char));

  printf("\nEnter string 1 and string 2 (not more than 50 simbols in one "
         "string):");
  fgets(str1, 51, stdin);
  fgets(str2, 51, stdin);

  int n = strlen(str2) - 1;
  for (int i = 0; i < n; i++) {
    if (strchr(str3, str2[i]) == NULL) {
      str3[j] = str2[i];
      j++;
    }
    str3[j] = '\0';
  }
  printf("\nstr3: %s", str3);

  for (int i = 0; i < j; i++) {
    char *p = strchr(str1, str3[i]);
    // if(p != NULL) count++;
    while (p != NULL) {
      count++;
      p = strchr(p + 1, str3[i]);
    }
  }
  printf("\n%d repetition(s) was/were found.", count);

  free(str1);
  free(str2);
  free(str3);
}

void task5() {
  char *str1_t5 = (char *)malloc(51 * sizeof(char));
  char *str2_t5 = (char *)malloc(51 * sizeof(char));
  char *target;
  short flag = 0;

  printf(
      "\nEnter string1 and string2 (not more than 50 simbols in one string):");
  fgets(str1_t5, 50, stdin);
  fgets(str2_t5, 50, stdin);
  short n = strlen(str2_t5);
  str2_t5[n - 1] = '\0';
  char *p = strstr(str1_t5, str2_t5);
  while (p != NULL) {
    flag = 1;
    target = p;
    p = strstr(p + 1, str2_t5);
  }
  (flag == 1) ? printf("\nThe last occurence of string2 in string1: %s", target)
              : printf("\nString2 not occurs in string1.");
}

//    (p != NULL)? p = strchr(p+1, ch) : printf("\n The second occurence '%c' in
//    string not foundded.", ch);
