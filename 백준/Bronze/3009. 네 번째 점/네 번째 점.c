#include <stdio.h>

int main(void) {

  int a, b, c, d, e, f;
  scanf("%d %d", &a, &b);
  scanf(" %d %d", &c, &d);
  scanf(" %d %d", &e, &f);

  int q, w;
  if(a == c){
    q = e;
  }else if(a == e){
    q = c;
  }else {q = a;}
  if(b == d){
    w = f;
  }else if(b == f){
    w = d;
  }else {w = b;}
  printf("%d %d", q, w);
  
  return 0;
}