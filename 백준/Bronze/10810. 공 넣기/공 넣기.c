#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);

  int z[a];
  for (int i = 0; i < a; i++){
    z[i] = 0;
  }
  for (int i = 0; i < b; i++){
    int q, w, e;
    scanf("%d %d %d", &q, &w, &e);

    for (int j = q-1; j <= w-1; j++){
      z[j] = e;
    }
  }for (int i = 0; i < a; i++){
    printf("%d ", z[i]);
  }
  
  return 0;
}