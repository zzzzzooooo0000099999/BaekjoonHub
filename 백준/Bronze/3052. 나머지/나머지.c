#include <stdio.h>

int main(void) {

  int z[9];
  int x[41] = {0, };
  for (int i = 0; i <= 9; i++){
    scanf("%d", &z[i]);
    x[z[i]%42] = 1;
  }

  int cnt = 0;
  for (int i = 0; i <= 41; i++){
    if (x[i] == 1){
      cnt++;
    }
  }printf("%d", cnt);
  
  return 0;
}