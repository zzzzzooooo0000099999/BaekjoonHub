#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  long long q, w;
  if (a%c == 0){
    q = a/c;
  }else {q = a/c+1;}
  if (b%c == 0){
    w = b/c;
  }else {w = b/c+1;}
  printf("%lld", q*w);
  
  return 0;
}