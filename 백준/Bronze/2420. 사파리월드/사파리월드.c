#include <stdio.h>

int main(void) {

  long int a, b;
  scanf("%ld %ld", &a, &b);

  if (a > b) {
    printf("%ld", a-b);
  }else {
    printf("%ld", b-a);
  }
    
  return 0;
}