#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int z[a];
  for (int i = 0; i < a; i++){
    scanf("%d", &z[i]);
  }

  int min = z[0];
  int max = z[0];
  for (int i = 0; i < a; i++){
    if (z[i] < min){
      min = z[i];
    }if (z[i] > max){
      max = z[i];
    }
    }printf("%d %d", min, max);
  
  return 0;
}