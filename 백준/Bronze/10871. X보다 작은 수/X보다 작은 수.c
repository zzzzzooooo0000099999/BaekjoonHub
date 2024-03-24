#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);

  int z[a];
  for (int i = 0; i < a; i++){
    scanf("%d", &z[i]);
  }
  
  for (int i = 0; i < a; i++){
    if (z[i] < b){
      printf("%d ", z[i]);
    }
  }
  
  return 0;
}