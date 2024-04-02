#include <stdio.h>

int main(void) {

  int q, w;
  scanf("%d %d", &q, &w);

  printf("%d", (q+w)*(q-w));
  
  return 0;
}