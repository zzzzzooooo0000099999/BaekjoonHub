#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int big_x = 0, sma_y = 0, sma_z = 0;

  if (a >= b && a >= c){
    big_x = a;
    sma_y = b;
    sma_z = c;
  }else if (b >= a && b >= c){
    big_x = b;
    sma_y = a;
    sma_z = c;
  }else {
    big_x = c;
    sma_y = a;
    sma_z = b;
  }
  int d = sma_y + sma_z;
  if (d > big_x){
    printf("%d", a+b+c);
  }else {printf("%d", 2*sma_y+2*sma_z-1);}

  return 0;
}