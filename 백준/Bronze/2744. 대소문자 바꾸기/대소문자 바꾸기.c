#include <stdio.h>

int main(void) {

  char a[100];
  scanf("%s", a);

  int size;
  for (size = 0; a[size] != '\0'; size++);

  for (int i = 0; i < size; i++){
    if (a[i] >= 'a' && a[i] <= 'z'){
      a[i] = a[i] - 32;
    }else {
      a[i] = a[i] + 32;
    }
  }printf("%s", a);
  
  return 0;
}