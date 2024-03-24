#include <stdio.h>

int main(void) {

  int a, b;
  int z[b];
  int e = 0;
  
  scanf("%d\n%d", &a, &b);

  for(int i = 0; i < b; i++) {
    int q, w;
    scanf("%d %d", &q, &w);
    z[i] = q*w;
    e = e+z[i];
  }
  if (a == e) {
    printf("Yes");
  }else{
    printf("No");
  }
  
  return 0;
}