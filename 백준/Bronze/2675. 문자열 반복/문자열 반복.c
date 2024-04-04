#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  char q[160][a];
  for (int i = 0; i < a; i++){
    for (int j = 0; j < 160; j++){
      q[j][i] = NULL;
    }
  }
  for (int i = 0; i < a; i++) {
    int b;
    char z[20];
    scanf("%d %s", &b, z);

    int size;
    for (size = 0; z[size] != '\0'; size++);

    for (int j = 0; j < size; j++){
      for (int k = 0; k < b; k++){
        q[j*b + k][i] = z[j];
      }
    }
  }
  for (int i = 0; i < a; i++){
    int size;
    for (size = 0; q[size][i] != '\0'; size++);
    for (int j = 0; j < size; j++){
      printf("%c", q[j][i]);
    }printf("\n");
  }
  
  return 0;
}