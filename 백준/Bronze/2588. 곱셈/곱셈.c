#include <stdio.h>

int main(void) {

  int a, b;
  int q, w, e;

  scanf("%d\n%d", &a, &b);

  q = b/100;
  w = (b-q*100) / 10;
  e = b%10;

  printf("%d\n%d\n%d\n%d", a*e, a*w, a*q, a*b);
  
  return 0;
}