#include <stdio.h>

int main(void) {

  int q, w, e, r, t;
  scanf("%d %d %d %d %d", &q, &w, &e, &r, &t);

  printf("%d", (q*q+w*w+e*e+r*r+t*t)%10);
  
  return 0;
}