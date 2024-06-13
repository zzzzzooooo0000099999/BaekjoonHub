#include <stdio.h>

int main(void) {

  int a, b, c, d;
  scanf("%d %d", &a, &b);
  scanf(" %d %d", &c, &d);

  int sum_1 = a+d;
  int sum_2 = b+c;
  if (sum_1 < sum_2){
    printf("%d", sum_1);
  }else {printf("%d", sum_2);}

  return 0;
}