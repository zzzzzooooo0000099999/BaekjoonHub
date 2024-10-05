#include <stdio.h>

int main(void) {

  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  b = b/d;
  c = c/d;
  if (a > b*c) printf("%d", b*c);
  else printf("%d", a);

  return 0;
}