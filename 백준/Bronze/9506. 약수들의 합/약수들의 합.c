#include <stdio.h>

int main(void) {

  while(1){
    int a;
    scanf("%d", &a);
    if(a == -1){
      break;
    }
    
    int c = 0;
    for(int i = 1; i < a; i++){
      if (a % i == 0){
        c += i;
      }
    }
    if (c == a){
      printf("%d = 1", a);
      for(int i = 2; i < a; i++){
        if (a % i == 0){
          printf(" + %d", i);
        }
      }printf("\n");
    }else {printf("%d is NOT perfect.\n", a);}
  }

  return 0;
}