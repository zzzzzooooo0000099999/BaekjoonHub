#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if (a+b+c >= 100){
    printf("OK");
    return 0;
  }else{
    if (a < b && a < c) printf("Soongsil");
    else if (b < a && b < c) printf("Korea");
    else printf("Hanyang");
  }

  return 0;
}