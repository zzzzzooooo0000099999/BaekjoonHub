#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int max, mid, min;
  if(a > b && a > c){
    max = a;
    if (b > c){
      mid = b;
      min = c;
    }else{
      mid = c;
      min = b;
    }
  }else if (b > a && b > c){
    max = b;
    if (a > c){
      mid = a;
      min = c;
    }else{
      mid = c;
      min = a;
    }
  }else{
    max = c;
    if (a > b){
      mid = a;
      min = b;
    }else{
      mid = b;
      min = a;
    }
  }
  printf("%d %d %d", min, mid, max);
  
  return 0;
}