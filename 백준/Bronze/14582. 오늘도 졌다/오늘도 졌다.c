#include <stdio.h>

int main(void) {

  int a[2][9];
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 9; j++){
      scanf("%d", &a[i][j]);
    }
  }

  int sum_a = 0;
  int sum_b = 0;
  int tri = 0;
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 2; j++){
      if (j == 0) sum_a += a[j][i];
      if (sum_a > sum_b) tri++;
      if (j == 1) sum_b += a[j][i];
    }
  }
  
  if (tri != 0) printf("Yes");
  else printf("No");
  
  return 0;
}