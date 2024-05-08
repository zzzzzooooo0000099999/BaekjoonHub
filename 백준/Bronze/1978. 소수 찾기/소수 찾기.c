#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a];
  for (int i = 0; i < a; i++){
    scanf("%d", &b[i]);
  }

  int cnt = 0;

  for (int i = 0; i < a; i++){
    int tri = 0;
    if (b[i] == 1){
      tri = 1;
    }
    for (int j = 2; j < b[i]; j++){
      if (b[i] == 2){
        tri = 0;
        break;
      }else if (b[i] % j == 0){
        tri = 1;
        break;
      }
    }
    if (tri == 0){
      cnt++;
    }
  }
  printf("%d", cnt);
  
  return 0;
}