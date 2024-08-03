#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  scanf("%d", &a);
  getchar();
  char b[a][200];
  for (int i=0; i<a; i++){
    fgets(b[i], 200, stdin);
    b[i][strlen(b[i])-1] = '\0';
  }

  for (int i=0; i<a; i++){
    printf("%d. %s\n", i+1, b[i]);
  }

  return 0;
}