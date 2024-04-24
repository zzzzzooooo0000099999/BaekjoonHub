#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int q;
  q = c - a;
  int w;
  w = a - b;
  int e;
  e = q / w;
  if (q%w == 0){
    printf("%d", e+1);
  }else {printf("%d", e+2);}
  
  return 0;
}