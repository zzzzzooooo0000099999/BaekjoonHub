#include <stdio.h>

int main(void) {

  long int q, w;
  scanf("%ld %ld", &q, &w);

  printf("%ld", (q+w)*(q-w));
  
  return 0;
}