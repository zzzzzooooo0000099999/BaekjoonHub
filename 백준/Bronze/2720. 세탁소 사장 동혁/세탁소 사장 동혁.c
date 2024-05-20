#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a];
  for(int i = 0; i < a; i++){
    scanf(" %d", &b[i]);
  }

  int c[a][4];
  for(int i = 0; i < a; i++){
    for(int j = 0; j < 4; j++){
      c[i][j] = 0;
    }
  }

  for(int i = 0; i < a; i++){
    c[i][0] = b[i] / 25;
    b[i] = b[i] % 25;
    c[i][1] = b[i] / 10;
    b[i] = b[i] % 10;
    c[i][2] = b[i] / 5;
    c[i][3] = b[i] % 5;
  }

  for(int i = 0; i < a; i++){
    printf("%d %d %d %d\n", c[i][0], c[i][1], c[i][2], c[i][3]);
  }
  
  return 0;
}