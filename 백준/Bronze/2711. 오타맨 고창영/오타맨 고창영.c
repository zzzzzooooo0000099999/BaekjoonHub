#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int b[a];
  char c[a][100];
  for (int i = 0; i < a; i++){
    scanf("%d %s", &b[i], c[i]);
    for (int j = b[i]-1; j < strlen(c[i]); j++){
      c[i][j] = c[i][j+1];
    }
  }

  for (int i = 0; i < a; i++){
    printf("%s\n", c[i]);
  }
  
  return 0;
}