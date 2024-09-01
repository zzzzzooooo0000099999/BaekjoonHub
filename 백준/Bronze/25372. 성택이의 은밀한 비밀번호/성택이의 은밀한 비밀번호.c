#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  scanf("%d", &a);
  char b[a][21];
  for (int i = 0; i < a; i++){
    scanf("%s", b[i]);
  }
  
  for (int i = 0; i < a; i++){
    if (strlen(b[i]) >= 6 && strlen(b[i]) <=9) printf("yes\n");
    else printf("no\n");
  }
  
  return 0;
}