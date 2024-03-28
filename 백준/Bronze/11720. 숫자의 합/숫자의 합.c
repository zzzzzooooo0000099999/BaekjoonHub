#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  char z[a];
  int sum = 0;
  scanf("%s", z);
  
  for (int i = 0; i < a; i++){
    sum += z[i]-48;
  }printf("%d", sum);

  return 0;
}