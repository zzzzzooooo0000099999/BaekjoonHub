#include <stdio.h>

int main(void) {

  int a[5];
  int sum = 0;
  scanf("%d\n%d\n%d\n%d\n%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
  for (int i = 0; i < 5; i++) {
    if (a[i] < 40){
      a[i] = 40;
    }
    sum += a[i];
  }
  
  printf("%d", sum/5);

  return 0;
}