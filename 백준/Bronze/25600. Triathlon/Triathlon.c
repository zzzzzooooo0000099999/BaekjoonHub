#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int b[a][3];
  int sum[a];
  for (int i = 0; i < a; i++){
    scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
    if (b[i][0] == (b[i][1] + b[i][2])) sum[i] = 2 * b[i][0] * (b[i][1] + b[i][2]);
    else sum[i] = b[i][0] * (b[i][1] + b[i][2]);
  }

  int big_sum = sum[0];
  for (int i = 1; i < a; i++){
    if (big_sum < sum[i]) big_sum = sum[i];
  }
  printf("%d", big_sum);
  
  return 0;
}