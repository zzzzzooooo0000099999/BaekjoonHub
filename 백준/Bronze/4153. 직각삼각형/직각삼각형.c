#include <stdio.h>

int main(void) {

  while(1){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == 0 && b == 0 && c == 0) break;
    
    int big = a, small1 = b, small2 = c;
    if (b > a && b > c){
      big = b;
      small1 = a;
      small2 = c;
    }if (a > b && a > c){
      big = a;
      small1 = b;
      small2 = c;
    }if (c > a && c > b){
      big = c;
      small1 = a;
      small2 = b;
    }
    if (big * big == small1 * small1 + small2 * small2){
      printf("right\n");
    }else {printf("wrong\n");}
    
  }
  
  return 0;
}