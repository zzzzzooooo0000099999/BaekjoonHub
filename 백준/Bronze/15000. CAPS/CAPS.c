#include <stdio.h>
#include <string.h>

int main(void) {

  char a[1000001];
  scanf("%s", a);

  int len = strlen(a);
  
  for (int i = 0; i < len; i++) {
    a[i] = a[i] + 'A' - 'a';
  }

  printf("%s", a);

  return 0;
}