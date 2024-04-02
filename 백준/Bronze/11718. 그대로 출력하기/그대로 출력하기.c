#include <stdio.h>

int main(void) {

  char a[100];

  while (scanf("%[^\n]", a) != EOF){
    getchar();
    printf("%s\n", a);
  }
  
  return 0;
}