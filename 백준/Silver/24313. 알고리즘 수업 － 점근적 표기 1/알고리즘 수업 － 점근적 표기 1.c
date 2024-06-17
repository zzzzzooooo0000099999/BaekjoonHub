#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);
  int c, d;
  scanf(" %d", &c);
  scanf(" %d", &d);

  if (a * d + b <= c * d && a <= c){
    printf("1");
  }else {printf("0");}
  
  return 0;
}