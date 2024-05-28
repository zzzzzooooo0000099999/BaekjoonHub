#include <stdio.h>

int main(void) {

  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  int e, f;
  e = c - a;
  f = d - b;

  a = a < e ? a : e;
  b = b < f ? b : f;

  printf("%d", a < b ? a : b);
  
  return 0;
}