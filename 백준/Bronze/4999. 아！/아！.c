#include <stdio.h>

int main(void) {

  char a[1000];
  char b[1000];
  scanf("%s", a);
  scanf(" %s", b);
  int size_a, size_b;
  for(size_a = 0; a[size_a] != '\0'; size_a++);
  for(size_b = 0; b[size_b] != '\0'; size_b++);
  if (size_a >= size_b){
    printf("go");
  }else {printf("no");}
  
  return 0;
}