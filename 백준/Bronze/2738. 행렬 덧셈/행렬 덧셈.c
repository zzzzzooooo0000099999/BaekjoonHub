#include <stdio.h>

int main(void) {

  int q, w;
  scanf("%d %d", &q, &w);

  int a[q][w];
  for (int i = 0; i < q; i++){
    for (int j = 0; j < w; j++){
      scanf("%d", &a[i][j]);
    }
  }
  int b[q][w];
  for (int i = 0; i < q; i++){
    for (int j = 0; j < w; j++){
      scanf("%d", &b[i][j]);
    }
  }
  int c[q][w];
  for (int i = 0; i < q; i++){
    for (int j = 0; j < w; j++){
      c[i][j] = a[i][j] + b[i][j];
    }
  }
  for (int i = 0; i < q; i++){
    for (int j = 0; j < w; j++){
      printf("%d ", c[i][j]);
    }printf("\n");
  }
  
  return 0;
}