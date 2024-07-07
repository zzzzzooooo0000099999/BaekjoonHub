#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b = a/5;
  if (a%5 == 0) printf("%d", b);
  else printf("%d", b+1);
  
  return 0;
}