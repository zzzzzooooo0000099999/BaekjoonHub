#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int b[a];
  for (int i = 0; i < a; i++){
    scanf("%d", &b[i]);
  }

  int cnt = 1;
  int num = b[a-1];
  for (int i = a-1; i >= 0; i--){
    if (b[i] > num){
      cnt++;
      num = b[i];
    }
  }

  printf("%d", cnt);
  
  return 0;
}