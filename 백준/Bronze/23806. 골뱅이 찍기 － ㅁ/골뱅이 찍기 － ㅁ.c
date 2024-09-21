#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  for(int i = 1; i <= a; i++){
    for(int j = 1; j <= a*5; j++){
      printf("@");
    }printf("\n");
  }

  for (int i = 1; i <= a*3; i++){
    for (int j = 1; j <= a; j++){
      printf("@");
    }
    for (int j = 1; j <= a*3; j++){
      printf(" ");
    }
    for (int j = 1; j <= a; j++){
      printf("@");
    }printf("\n");
  }

  for(int i = 1; i <= a; i++){
    for(int j = 1; j <= a*5; j++){
      printf("@");
    }printf("\n");
  }
  
  return 0;
}