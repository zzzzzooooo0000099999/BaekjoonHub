#include <stdio.h>
#include <math.h>

int main(void) {

  char a[5];
  scanf("%s", a);

  int q = pow(a[0]-48, 5);
  int w = pow(a[1]-48, 5);
  int e = pow(a[2]-48, 5);
  int r = pow(a[3]-48, 5);
  int t = pow(a[4]-48, 5);

  printf("%d", q+w+e+r+t);
  
  return 0;
}