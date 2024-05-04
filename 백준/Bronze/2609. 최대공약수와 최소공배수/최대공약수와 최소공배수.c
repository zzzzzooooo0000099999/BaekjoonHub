#include <stdio.h>

int gcd(int big, int small){
  int remainder = 1;
  while (remainder != 0){
    remainder = big % small;
    big = small;
    small = remainder;
  }
  return big;
}

int lcm(int big, int small){
  return big * small / gcd(big, small);
}

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);
  if (a < b){
    int temp = a;
    a = b;
    b = temp;
  }
  printf("%d\n%d",gcd(a, b), lcm(a, b));
  
  return 0;
}