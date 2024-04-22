#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a][2];
  for (int i = 0; i < a; i++){
    scanf(" %d %d", &b[i][0], &b[i][1]);
  }

  int c[100][100] = {0, };
  for (int i = 0; i < a; i++){
    for (int j = b[i][0]; j < b[i][0]+10; j++){
      for (int k = b[i][1]; k < b[i][1]+10; k++){
        c[j][k] = 1;
      }
    }
  }
  int cnt = 0;
  for (int i = 0; i < 100; i++){
    for (int j = 0; j < 100; j++){
      if (c[i][j] == 1){
        cnt++;
      }
    }
  }printf("%d", cnt);
  
  return 0;
}