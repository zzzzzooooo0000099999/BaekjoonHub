#include <stdio.h>

long long gcd(long long min, long long max){
  long long remainder = 1;
  while(remainder != 0){
    remainder = max % min;
    max = min;
    min = remainder;
  }
  return max;
}

long long lcm(long long min, long long max){
  return (min * max) / gcd(min, max);
}

int main(void) {

  long long a, b;
  scanf("%lld %lld", &a, &b);
  if(a > b){
    long long temp = a;
    a = b;
    b = temp;
  }
  printf("%lld", lcm(a, b));
  
  return 0;
}