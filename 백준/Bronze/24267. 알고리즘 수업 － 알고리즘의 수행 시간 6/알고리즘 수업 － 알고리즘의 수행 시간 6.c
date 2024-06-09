#include <stdio.h>

int main(void) {

  unsigned long long a;
  scanf("%llu", &a);

  unsigned long long sum = a*(a-1)*(a-2);

  printf("%llu\n3", sum/6);

  return 0;
}