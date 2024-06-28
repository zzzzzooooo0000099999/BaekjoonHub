#include <stdio.h>

int main(void) {

  int a[5];
  scanf("%d\n%d\n%d\n%d\n%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
  printf("%d", a[0] + a[1] + a[2] + a[3] + a[4]);
  
  return 0;
}