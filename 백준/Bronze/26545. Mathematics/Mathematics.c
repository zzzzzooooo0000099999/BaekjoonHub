#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a];
  int sum = 0;
  for (int i = 0; i < a; i++){
    scanf("%d", &b[i]);
    sum += b[i];
  }

  printf("%d", sum);

  return 0;
}