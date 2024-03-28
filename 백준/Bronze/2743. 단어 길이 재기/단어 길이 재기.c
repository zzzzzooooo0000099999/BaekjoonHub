#include <stdio.h>

int main(void) {

  char s[100];
  scanf("%s", s);

  int size;
  for (size = 0; s[size] != '\0'; size++);
  
  printf("%d", size);
  
  return 0;
}