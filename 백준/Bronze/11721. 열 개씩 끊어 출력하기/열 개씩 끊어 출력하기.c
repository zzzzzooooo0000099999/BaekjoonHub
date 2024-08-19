#include <stdio.h>
#include <string.h>

int main(void) {

  char a[101];
  scanf("%s", a);

  for (int i=0; i<strlen(a); i++){
    if (i>1 && i%10 == 0){
      printf("\n");
    }
    printf("%c", a[i]);
  }
  
  return 0;
}