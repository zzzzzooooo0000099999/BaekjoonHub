#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if (b<c) printf("Bus");
  else if (b==c) printf("Anything");
  else printf("Subway");

  return 0;
}