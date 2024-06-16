#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);
  int c[a], d[b];
  for (int i = 0; i < a; i++){
    scanf(" %d", &c[i]);
  }
  for (int i = 0; i < b; i++){
    scanf(" %d", &d[i]);
  }

  for (int i = 0; i < a; i++){
    for (int j = 0; j < b; j++){
      if (c[i] >= d[j] && d[j] != 0){
        c[i] -= d[j];
        d[j] = 0;
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < a; i++){
    sum += c[i];
  }

  printf("%d", sum);
  
  return 0;
}