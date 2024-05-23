#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);

  int c[a + 1];
  for (int i = 0; i < a; i++) {
    c[i] = 0;
  }

  int d = 0;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      c[i] = i;
      d++;
    }
  }
  if (d < b) {
    printf("0");
    return 0;
  }
  
  int cnt = 0;
  int num;
  for (int i = 0; i <= a; i++) {
    if (c[i] != 0){
      cnt++;
      num = i;
    }
    if (cnt == b){
      break;
    }
  }

  printf("%d", num);

  return 0;
}