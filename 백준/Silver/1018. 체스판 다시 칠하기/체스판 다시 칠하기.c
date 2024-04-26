#include <stdio.h>

int main(void) {

  int a, b;
  scanf("%d %d", &a, &b);
  char c[a][b+1];
  for (int i = 0; i < a; i++){
    scanf(" %s", c[i]);
  }

  int q[a-8+1][b-8+1];

  for (int i = 0; i < a-8+1; i++){
    for (int j = 0; j < b-8+1; j++){
      int cnt[2] = {0, 0};

      for (int k = i; k < i+8; k++){
        for (int l = j; l < j+8; l++){
          if (k%2 == 0 && l%2 == 0){
            if (c[k][l] != 'B'){
              cnt[0]++;
            }
            if (c[k][l] != 'W'){
              cnt[1]++;
            }
          }
          if (k%2 == 0 && l%2 == 1){
            if (c[k][l] != 'W'){
              cnt[0]++;
            }
            if (c[k][l] != 'B'){
              cnt[1]++;
            }
          }
          if (k%2 == 1 && l%2 == 0){
            if (c[k][l] != 'W'){
              cnt[0]++;
            }
            if (c[k][l] != 'B'){
              cnt[1]++;
            }
          }
          if (k%2 == 1 && l%2 == 1){
            if (c[k][l] != 'B'){
              cnt[0]++;
            }
            if (c[k][l] != 'W'){
              cnt[1]++;
            }
          }
        }
      }
      if (cnt[0] < cnt[1]){q[i][j] = cnt[0];}
      else{q[i][j] = cnt[1];}
    }
  }
  int min = q[0][0];
  for (int i = 0; i < a-8+1; i++){
    for (int j = 0; j < b-8+1; j++){
      if (q[i][j] < min){
        min = q[i][j];
      }
    }
  }
  printf("%d", min);

  return 0;
}