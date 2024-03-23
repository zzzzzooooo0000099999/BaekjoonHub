#include <stdio.h>

int main(void) {

  int a, b, c;
  int q, w, e;

  scanf("%d %d\n%d", &a, &b, &c);

  q = (b+c)/60;
  w = (b+c)%60;
  e = (a+q)%24;
  
  if (q == 0) {
    printf("%d %d", a, w);
  }else{
    if (e == 0) {
      printf("%d %d", 0, w);
    }else{
      printf("%d %d", e, w);
    }
  }
  
  return 0;
}