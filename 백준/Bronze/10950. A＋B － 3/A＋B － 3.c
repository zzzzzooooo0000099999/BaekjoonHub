#include <stdio.h>

int main(void) {

  int a;

  scanf("%d", &a);
  int z[a];

  for(int i = 0; i < a; i++) {
    int q, w;    
    scanf("%d %d", &q, &w);

    z[i] = q + w;
  }
  for(int i = 0; i < a; i++){
    printf("%d\n", z[i]);
  }
  
  return 0;
}