#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a][2];
  for (int i = 0; i < a; i++){
    scanf(" %d %d", &b[i][0], &b[i][1]);
  }

  int big_x = b[0][0];
  int sma_x = b[0][0];
  int big_y = b[0][1];
  int sma_y = b[0][1];

  for (int i = 0; i < a; i++){
    if (b[i][0] > big_x) big_x = b[i][0];
    if (b[i][0] < sma_x) sma_x = b[i][0];
    if (b[i][1] > big_y) big_y = b[i][1];
    if (b[i][1] < sma_y) sma_y = b[i][1];
  }

  printf("%d", (big_x - sma_x) * (big_y - sma_y));
  
  return 0;
}