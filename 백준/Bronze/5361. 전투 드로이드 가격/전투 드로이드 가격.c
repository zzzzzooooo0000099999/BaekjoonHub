#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  float sum[a];
  float pri[5];
  for (int i = 0; i < a; i++){
    sum[i] = 0;
    scanf(" %f %f %f %f %f", &pri[0], &pri[1], &pri[2], &pri[3], &pri[4]);
    sum[i] = pri[0]*350.34 + pri[1]*230.90 + pri[2]*190.55 + pri[3]*125.30 + pri[4]*180.90;
  }
  for (int i = 0; i < a; i++){
    printf("$%.2f\n", sum[i]);
  }

  return 0;
}