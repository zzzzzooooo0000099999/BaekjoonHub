#include <stdio.h>
#include <stdlib.h>

int compare(const int* a, const int* b) {
  return(*a - *b);
}

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);
  int c[a];
  for(int i = 0; i < a; i++){
    scanf(" %d", &c[i]);
  }

  qsort(c, a, sizeof(int), compare);
  printf("%d", c[a-b]);

  return 0;
}