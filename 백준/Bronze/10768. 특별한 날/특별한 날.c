#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d", &a);
  scanf(" %d", &b);

  if (a == 2 && b == 18) printf("Special");
  else if (a < 2) printf("Before");
  else if (a == 2 && b < 18) printf("Before");
  else printf("After");

  return 0;
}