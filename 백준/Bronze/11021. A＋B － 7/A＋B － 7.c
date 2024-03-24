#include <stdio.h>

int main(void) {

  int a;
  
  scanf("%d", &a);

  for (int i = 0; i < a; i++){
    int q, w;
    scanf("%d %d", &q, &w);
    printf("Case #%d: %d\n", i+1, q+w);
  }
  
  return 0;
}