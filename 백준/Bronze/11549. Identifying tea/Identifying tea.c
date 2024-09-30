#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int cnt = 0;
  int b[5];
  scanf("%d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4]);
  for (int i = 0; i < 5; i++){
    if (b[i] == a)
      cnt++;
  }

  printf("%d", cnt);

  return 0;
}