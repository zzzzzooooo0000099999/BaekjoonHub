#include <stdio.h>
#include <math.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int cnt2 = 0;
  int cnt5 = 0;

  for (int i = 1; i <= a; i++){
    int b = i;
    while (b % 2 == 0){
      cnt2++;
      b /= 2;
    }
    int c = i;
    while (c % 5 == 0){
      cnt5++;
      c /= 5;
    }
    
  }
  
  if (cnt2 > cnt5){
    printf("%d", cnt5);
  }else {printf("%d", cnt2);}
  
  return 0;
}