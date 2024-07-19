#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int d, e;
  scanf(" %d %d", &d, &e);
  int min_f;
  int min_s;

  if (a<=b && a<=c) min_f = a;
  else if (b<=a && b<=c) min_f = b;
  else min_f = c;
  if (d<=e) min_s = d;
  else min_s = e;
  
  printf("%d", min_f+min_s-50);  

  return 0;
}