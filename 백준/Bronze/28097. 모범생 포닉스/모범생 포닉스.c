#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int sum = 8*(a-1);
  int b[a];
  for (int i = 0; i < a; i++){
    scanf("%d", &b[i]);
    sum += b[i];
  }
  printf("%d %d", sum/24, sum%24);
  
  return 0;
}