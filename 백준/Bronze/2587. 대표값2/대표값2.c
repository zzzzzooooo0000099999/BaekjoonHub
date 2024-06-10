#include <stdio.h>
#include <stdlib.h>

int compare(const int* a, const int* b) {
  return(*a - *b);
}

int main(void) {

  int a[5];
  for (int i = 0; i < 5; i++){
    scanf(" %d", &a[i]);
  }
  int sum = a[0]+a[1]+a[2]+a[3]+a[4];
  printf("%d\n", sum/5);
  qsort(a, 5, sizeof(int), compare);
  printf("%d", a[2]);

  return 0;
}