#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int q[a];
  int w[a];
  for (int i = 0; i < a; i++){
    scanf("%d %d", &q[i], &w[i]);
  }
  for (int i = 0; i < a; i++){
    long long int e = 1, r = 1;
    for (int j = 0; j < q[i]; j++){
      e = e * (w[i] - j);
      e = e / (j + 1);
    }
    printf("%lld\n", e);
  }
  
  return 0;
}