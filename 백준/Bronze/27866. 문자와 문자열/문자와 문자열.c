#include <stdio.h>

int main(void) {

  char s[1000];
  int a;
  scanf("%s\n%d", s, &a);
  
  printf("%c", s[a-1]);
  
  return 0;
}