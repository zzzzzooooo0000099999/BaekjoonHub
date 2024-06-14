#include <stdio.h>

int gcd(int min, int max){
  int remainder = 1;
  while(remainder != 0){
    remainder = max % min;
    max = min;
    min = remainder;
  }
  return max;
}

int lcm(int min, int max){
  return (min * max) / gcd(min, max);
}

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a][2];
  for(int i = 0; i < a; i++){
    scanf(" %d %d", &b[i][0], &b[i][1]);
  }
  int c[a];
  for(int i = 0; i < a; i++){
    c[i] = lcm(b[i][0], b[i][1]);
  }
  for(int i = 0; i < a; i++){
    printf("%d\n", c[i]);
  }
  
  return 0;
}