#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  for (int i = -a+1; i < a; i++){
    if (i < 0){
        for (int j = -i; j > 0; j--){
            printf(" ");
        }for (int j = 1; j <= (2*a) - (-2*i+1); j ++){
            printf("*");
        }
    }else{
        for (int j = i; j > 0; j--){
            printf(" ");
        }for (int j = 0; j < (2*a) - (2*i+1); j++){
            printf("*");
        }
    }printf("\n");
  }
  
  return 0;
}