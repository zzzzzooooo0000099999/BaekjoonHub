#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  char q[a][2];
  for (int i = 0; i < a; i++){
    char s[1000];
    scanf("%s", s);

    int size;
    for (size = 0; s[size] != '\0'; size++);

    q[i][0] = s[0];
    q[i][1] = s[size-1];
  }
  for (int i = 0; i < a; i++){
    for (int j = 0; j < 2; j++){
      printf("%c", q[i][j]);
    }printf("\n");
  }

  return 0;
}