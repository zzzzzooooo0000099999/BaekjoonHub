#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  scanf("%d", &a);
  char b[a];
  scanf("%s", b);

  long long sum=0;
  
  for (int i=0; i<a; i++){
    long long p = 1;
    for (int j=0; j<i; j++){
      p = p * 31 % 1234567891;
    }
    sum = (sum + (b[i] - 'a' + 1) * p) % 1234567891;
  }

  printf("%lld", sum);
  
  return 0;
}