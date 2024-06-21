#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int sum[a];
  for (int i = 0; i < a; i++){
    int num;
    scanf(" %d", &num);
    sum[i] = 0;
    int num_num[num];
    for (int j = 0; j < num; j++){
      scanf(" %d", &num_num[j]);
      sum[i] += num_num[j];
    }
  }
  for (int i = 0; i < a; i++){
    printf("%d\n", sum[i]);
  }
  
  return 0;
}