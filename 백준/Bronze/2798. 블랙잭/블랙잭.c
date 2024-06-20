#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);
  int num[a];
  for (int i = 0; i < a; i++){
    scanf(" %d", &num[i]);
  }

  int sum[a*(a-1)*(a-2)];
  int cnt = 0;
  for (int i = 0; i < a; i++){
    for (int j = i+1; j < a; j++){
      for (int k = j+1; k < a; k++){
        sum[cnt] = (num[i] + num[j] + num[k]);
        cnt++;
      }
    }
  }

  int max_sum = 0;
  for (int i = 1; i < a*(a-1)*(a-2); i++){
    if (max_sum < sum[i] && sum[i] <= b){
      max_sum = sum[i];
    }
  }
  printf("%d", max_sum);
  
  return 0;
}