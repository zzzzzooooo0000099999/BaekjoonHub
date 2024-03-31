#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int q = 1;
  for(int i = 1; i < a+1; i++){
    q = q * i;
  }printf("%d" , q);
  
  return 0;
}