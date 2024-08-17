#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const char *a, const char *b){
  return *b - *a;
}

int main(void) {

  char a[100];
  scanf("%s", a);

  qsort(a, strlen(a), sizeof(char), compare);

  printf("%s", a);
  
  return 0;
}