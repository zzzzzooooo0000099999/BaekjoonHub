#include <stdio.h>
#include <stdlib.h>

int compare(const int* a, const int* b){
  return *a - *b;
}

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);

  int c[a], d[b];
  for (int i = 0; i < a; i++){
    scanf("%d", &c[i]);
  }
  for (int i = 0; i < b; i++){
    scanf("%d", &d[i]);
  }

  int e[a+b];
  for (int i = 0; i < a; i++){
    e[i] = c[i];
  }
  for (int i = 0; i < b; i++){
    e[a+i] = d[i];
  }

  qsort(e, a+b, sizeof(int), compare);

  for (int i = 0; i < a+b; i++){
    printf("%d ", e[i]);
  }
  
  return 0;
}