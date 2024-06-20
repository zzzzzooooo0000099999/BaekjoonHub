#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  long long b = 1;
  for (int i = 1; i <= a; i++) {
    b = b * i;
  }
  printf("%lld", b);
  
  return 0;
}