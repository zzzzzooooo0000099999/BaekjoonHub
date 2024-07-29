#include <stdio.h>

int main(void) {

  int a, b, c, d, e;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  int f, g;
  if (b%d==0) f=b/d;
  else f=b/d+1;
  if (c%e==0) g=c/e;
  else g=c/e+1;

  if (f>=g) printf("%d", a-f);
  else printf("%d", a-g);

  return 0;
}