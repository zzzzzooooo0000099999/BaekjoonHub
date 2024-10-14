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
    if (b[i] % 2 == 1){
      cnt++;
    }
  }
  printf("%d", cnt);

  return 0;
}