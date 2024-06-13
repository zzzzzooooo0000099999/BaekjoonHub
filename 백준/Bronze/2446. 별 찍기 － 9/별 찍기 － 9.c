#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  for(int i = -a; i < 0; i++){
    int k = -i;

    for(int j = 0; j < a-k; j++){
      printf(" ");
    }
    for(int j = 0; j <= 2*(k-1); j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i = 2; i <= a; i++){
    int k = i;

    for(int j = 0; j < a-k; j++){
      printf(" ");
    }
    for(int j = 0; j <= 2*(k-1); j++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}