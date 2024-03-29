#include <stdio.h>

int main(void) {

  char s[100];
  scanf("%s", s);
  int size;
  for (size = 0; s[size] != '\0'; size++);

  int a[25];
  for (int i = 0; i < 26; i++){
    a[i] = -1;
  }
  
  for (int j = 0; j < 26; j++){
    for (int i = 0; i < size; i++){
      if (s[i] == 'a' + j){
        a[j] = i;
        break;
      }
    }
  }for (int i = 0; i < 26; i++){
    printf("%d ", a[i]);
  }
    
  return 0;
}