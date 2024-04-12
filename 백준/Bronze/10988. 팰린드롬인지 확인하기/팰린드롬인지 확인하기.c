#include <stdio.h>

int main(void) {

  char z[100];
  scanf("%s", z);
  int size;
  for (size = 0; z[size] != '\0'; size++);

  int c = 1;
  for (int i = 0; i < size; i++){
    if (z[i] != z[size - 1 - i]){
      c = 0;
      break;
    }
  }printf("%d", c);
  
  return 0;
}