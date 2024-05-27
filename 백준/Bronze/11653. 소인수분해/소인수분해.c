#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  if (a == 1){
    return 0;
  }

  for(int i = 2; i <= a; i++){
    if (a % i == 0){
      printf("%d\n", i);
      if (a == i){
        break;
      }
      a = a / i;
      i = 1;
    }
  }
  
  return 0;
}