#include <stdio.h>

int main(void) {

  char a[3];
  scanf("%s", a);
  printf("%c%c%c", a[2], a[1], a[0]);
  
  return 0;
}