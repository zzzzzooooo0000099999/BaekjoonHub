#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a][2];
  int c[a];
  for (int i = 0; i < a; i++){
    scanf("%d %d", &b[i][0], &b[i][1]);
    c[i] = 2 + b[i][1] - b[i][0];
  }

  for (int i = 0; i < a; i++){
    printf("%d\n", c[i]);
  }
  
  return 0;
}