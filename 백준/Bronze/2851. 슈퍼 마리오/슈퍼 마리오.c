#include <stdio.h>

int main(void) {

  int a[10];
  for (int i=0; i<10; i++){
    scanf("%d", &a[i]);
  }

  int j=0;
  int sum=0;
  for (int i=0; i<10; i++){
    sum += a[i];
    if (sum >= 100){
      j = i;
      break;
    }
  }

  int ex_sum=0;
  for (int i=0; i<j; i++){
    ex_sum += a[i];
  }

  if ((sum-100)<=(100-ex_sum)) printf("%d", sum);
  else printf("%d", ex_sum);
  
  return 0;
}