#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  for (int i = a-1; i >= 0; i--){
    for (int j = 0; j < i; j++){
      printf(" ");
    }
    for (int j = 2*(a-1-i); j >= 0; j--){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}