#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  for (int i=a; i >= 1; i--) {
    printf("%d\n", i);
  }
  
  return 0;
}