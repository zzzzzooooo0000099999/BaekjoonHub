#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);

  int z[a];
  for (int i = 0; i < a; i++){
    z[i] = i+1;
  }
  for (int i = 0; i < b; i++){
    int q, w, e;
    scanf("%d %d", &q, &w);

    e = z[q-1];
    z[q-1] = z[w-1];
    z[w-1] = e;
  }for (int i = 0; i < a; i++){
    printf("%d ", z[i]);
  }
  
  return 0;
}