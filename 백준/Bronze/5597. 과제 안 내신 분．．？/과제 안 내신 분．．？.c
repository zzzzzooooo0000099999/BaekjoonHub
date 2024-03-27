#include <stdio.h>

int main(void) {

  int z[27];
  int x[29] = {0, };
  int q, w;
  for (int i = 0; i <= 27; i++){
    scanf("%d", &z[i]);
    x[z[i]-1] = 1;
  }for (int i = 0; i <= 29; i++){
    if (x[i] == 0){
      printf("%d\n", i+1);
    }
  }
  
  return 0;
}