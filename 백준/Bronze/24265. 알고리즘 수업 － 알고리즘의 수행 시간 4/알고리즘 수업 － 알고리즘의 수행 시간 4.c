#include <stdio.h>

int main(void) {

  long long a;
  scanf("%lld", &a);
  long long b = 0;
  for (int i = 1; i < a; i++){
    b += i;
  }

  printf("%lld\n2", b);

  return 0;
}