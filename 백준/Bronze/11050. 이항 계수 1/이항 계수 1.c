#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);

  int q = 1;
  int w = 1;
  int e = 1;

  for (int i = 1; i <= a; i++){
    q = q * i;
  }
  for (int i = 1; i <= b; i++){
    w = w * i;
  }
  for (int i = 1; i <= (a - b); i++){
    e = e * i;
  }

  printf("%d", q / (w * e));
  
  return 0;
}