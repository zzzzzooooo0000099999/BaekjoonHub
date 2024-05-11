#include <stdio.h>
#include <math.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b = 1;
  for (int i = 0; i < a-1; i++){
    b += pow(2, i);
  }
  int c = b*2 + 1;
  long long d = pow(c, 2);
  printf("%lld", d);
  
  return 0;
}