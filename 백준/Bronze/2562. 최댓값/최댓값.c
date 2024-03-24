#include <stdio.h>

int main(void) {

  int z[9];
  for (int i = 0; i < 9; i++){
    scanf("%d", &z[i]);
  }

  int max = 0;
  int cnt;
  for (int i = 0; i < 9; i++){
    if (z[i] > max){
      max = z[i];
      cnt = i;
    }
    }printf("%d\n%d", max, cnt+1);
  
  return 0;
}