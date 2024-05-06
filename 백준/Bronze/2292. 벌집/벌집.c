#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  if (a == 1){
    printf("1");
  }else if (a >= 2 && a <= 7){
    printf("2");
  }else{
    int b = 8, c = 19;
    int cnt = 3;
    while (1){
      if (a >= b && a <= c){
        printf("%d", cnt);
        break;
      }else {
        b = c + 1;
        c = b + (6*cnt) - 1;
        cnt++;
      }
    }
  }
  
  return 0;
}