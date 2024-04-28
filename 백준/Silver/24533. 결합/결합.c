#include <stdio.h>

int main(void) {

  long long a;
  scanf("%lld", &a);
  long long b[a][2];
  for (int i = 0; i < a; i++){
    scanf("%lld %lld", &b[i][0], &b[i][1]);
  }

  long long c = 0;
  for (int i = 0; i < a-1; i++){
    c += b[i][0]*b[i+1][1] + b[i][1]*b[i+1][0];
    b[i+1][0] = b[i][0]+b[i+1][0];
    b[i+1][1] = b[i][1]+b[i+1][1];
  }
  printf("%lld", c);
  
  return 0;
}