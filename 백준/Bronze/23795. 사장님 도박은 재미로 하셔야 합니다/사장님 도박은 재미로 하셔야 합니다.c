#include <stdio.h>

int main(void) {

  int sum = 0;
  int a = 0;
  while(a != -1){
    scanf("%d", &a);
    sum += a;
  }
  printf("%d", sum+1);

  return 0;
}