#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);
  int c[a][2];
  for (int i = 0; i < a; i++){
    scanf(" %d %d", &c[i][0], &c[i][1]);
  }
  
  printf("비와이");

  return 0;
}