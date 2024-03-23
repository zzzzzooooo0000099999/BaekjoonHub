#include <stdio.h>

int main(void) {

  int a, b;
  double c;
  
  scanf("%d %d", &a, &b);

  c = (double)a / b;

  printf("%.12f", c);
  
  return 0;
}